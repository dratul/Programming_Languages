import re
import shutil
import subprocess
import sys
from pathlib import Path
from urllib.parse import unquote, urlsplit


ROOT = Path(__file__).resolve().parent.parent
MARKDOWN_LINK = re.compile(r"!?\[[^\]]*\]\(([^)]+)\)")
PYTHON_BLOCK = re.compile(r"^```python[ \t]*\r?\n(.*?)^```[ \t]*$", re.MULTILINE | re.DOTALL)


def unclosed_fence(text):
    marker = None

    for line_number, line in enumerate(text.splitlines(), start=1):
        stripped = line.lstrip()
        if not stripped.startswith(("```", "~~~")):
            continue

        character = stripped[0]
        marker_length = len(stripped) - len(stripped.lstrip(character))
        if marker_length < 3:
            continue

        if marker is None:
            marker = (character, marker_length, line_number)
        elif character == marker[0] and marker_length >= marker[1]:
            if not stripped[marker_length:].strip():
                marker = None

    return marker[2] if marker else None


def check_markdown():
    errors = []
    markdown_files = sorted(ROOT.rglob("*.md"))

    for path in markdown_files:
        text = path.read_text(encoding="utf-8")
        relative = path.relative_to(ROOT)

        fence_line = unclosed_fence(text)
        if fence_line is not None:
            errors.append(f"{relative}:{fence_line}: unclosed fenced-code block")

        for match in MARKDOWN_LINK.finditer(text):
            target = match.group(1).split("#", 1)[0].split("?", 1)[0].strip()
            if not target:
                continue
            parsed = urlsplit(target)
            if parsed.scheme or target.startswith("#"):
                continue
            local_target = unquote(parsed.path)
            if local_target and not (path.parent / local_target).resolve().exists():
                errors.append(f"{relative}: missing link target {local_target}")

        for index, match in enumerate(PYTHON_BLOCK.finditer(text), start=1):
            try:
                compile(match.group(1), f"{relative} Python example {index}", "exec")
            except SyntaxError as error:
                errors.append(
                    f"{relative} Python example {index}: "
                    f"line {error.lineno}: {error.msg}"
                )

    print(f"Checked {len(markdown_files)} Markdown files and their Python examples.")
    return errors


def check_c_sources():
    compiler = shutil.which("gcc")
    if compiler is None:
        print("GCC not found; skipped standalone C syntax checks.")
        return []

    sources = sorted(ROOT.rglob("*.c"))
    errors = []
    warnings = []

    for path in sources:
        result = subprocess.run(
            [compiler, "-std=c99", "-Wall", "-Wextra", "-Wpedantic",
             "-fsyntax-only", str(path)],
            capture_output=True,
            text=True,
            check=False,
        )
        relative = path.relative_to(ROOT)
        if result.returncode:
            errors.append(f"{relative}:\n{result.stderr.strip()}")
        elif result.stderr.strip():
            warnings.append(f"{relative}:\n{result.stderr.strip()}")

    print(f"Checked {len(sources)} standalone C files with GCC.")
    for warning in warnings:
        print(f"Warning:\n{warning}")
    return errors


def main():
    errors = check_markdown() + check_c_sources()
    if errors:
        print("\nValidation errors:")
        print("\n".join(errors))
        return 1
    print("Repository checks passed.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
