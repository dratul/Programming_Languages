# 3.6 File Handling in C

File handling lets a program save data for later use or read data that was saved earlier. The standard I/O functions for files are declared in `<stdio.h>`.

## Basic Steps

1. Declare a file pointer of type `FILE *`.
2. Open the file with `fopen()`.
3. Check that the file opened successfully.
4. Read from or write to the file.
5. Close the file with `fclose()`.

Common file modes include:

| Mode | Purpose |
| --- | --- |
| `"r"` | Read an existing file |
| `"w"` | Write a file; create it or replace its previous contents |
| `"a"` | Append to a file, creating it if needed |

## Writing and Reading a Text File

This program writes two lines to `notes.txt`, closes it, then opens it again to read and display those lines:

```c
#include <stdio.h>

int main(void) {
    FILE *file = fopen("notes.txt", "w");
    if (file == NULL) {
        perror("Could not open notes.txt for writing");
        return 1;
    }

    if (fputs("File handling in C\n", file) == EOF ||
        fputs("This line is saved in a text file.\n", file) == EOF) {
        perror("Could not write to notes.txt");
        fclose(file);
        return 1;
    }

    if (fclose(file) == EOF) {
        perror("Could not close notes.txt after writing");
        return 1;
    }

    file = fopen("notes.txt", "r");
    if (file == NULL) {
        perror("Could not open notes.txt for reading");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    if (ferror(file)) {
        perror("Could not read notes.txt");
        fclose(file);
        return 1;
    }

    if (fclose(file) == EOF) {
        perror("Could not close notes.txt after reading");
        return 1;
    }

    return 0;
}
```

**Output:**

```text
File handling in C
This line is saved in a text file.
```

`fopen()` returns `NULL` if it cannot open a file, so check the result before using it. `fputs()` writes text, and `fgets()` reads one line at a time into a buffer with a specified size. Always close a file after using it.

## Key Points

* A `FILE *` refers to an open file.
* Use `fopen()` to open a file and check for `NULL`.
* Choose a mode that matches the task: read (`"r"`), write (`"w"`), or append (`"a"`).
* Use functions such as `fputs()` and `fgets()` for text.
* Close files with `fclose()`.
