# Repository Guidance

- This repository is an introductory programming curriculum for first-year students. Keep explanations and examples beginner-friendly and focused on the current syllabus.
- Keep each unit's materials in its `unit_XX/` directory. Store standalone C examples in `unit_XX/mycodes/unit_XX/` and tutorial problem lists in `unit_XX/tutorials/`.
- Prefer small, self-contained examples that demonstrate one concept. Use standard C headers and avoid adding dependencies or build infrastructure unless the task requires them.
- Preserve the existing organization and naming style. Avoid unrelated changes when updating lessons or examples.
- When changing a C example, compile that file with a C compiler if one is available. For documentation-only changes, check that the content agrees with the neighboring course material.
- Run `python scripts\validate_examples.py` from the repository root to check Markdown links and code fences, Python examples, and standalone C files when GCC is available.