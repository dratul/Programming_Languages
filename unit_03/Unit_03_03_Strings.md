# 3.3 Strings in C
Unlike modern high-level languages like Python, Java, or C++, the C language **does not have a native `string` data type**. Instead, a string in C is simply a **one-dimensional array of characters (`char`) terminated by a special character called the null terminator (`'\0'`)**.

---

## 3.3.1. The Anatomy of a C String

A sequence of characters only becomes a valid C string if it ends with `'\0'` (ASCII value `0`). The null terminator tells functions like `printf()` where the text ends in memory.

### Visualizing Memory
If you store the word `"HELLO"`:

```
Index:    [ 0 ] [ 1 ] [ 2 ] [ 3 ] [ 4 ] [ 5 ]
Value:    | 'H' | 'E' | 'L' | 'L' | 'O' | '\0'|
```

> **Key Takeaway:** An array holding a string must be at least **one byte larger** than the visible character count to accommodate `'\0'`.

---

### 3.3.2. Declaring and Initializing Strings

There are two primary ways to declare strings:

#### Option A: String Literals (Recommended for Beginners)
When you use double quotes (`"..."`), the C compiler automatically appends `'\0'` to the end:

```c
// Array size inferred automatically (size = 6 bytes)
char greeting[] = "Hello"; 

// Explicit size with extra room for future characters
char buffer[50] = "Hello"; 
```

#### Option B: Character Array Syntax
You can explicitly initialize an array character by character, but you must manually include `'\0'`:

```c
// Equivalent to "Hello"
char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

> ⚠️ **Warning:** If you write `char bad[] = {'H', 'e', 'l', 'l', 'o'};` without `'\0'`, standard string functions will continue reading garbage data from memory until they randomly hit a byte with value `0`, leading to undefined behavior or crashes.

---

## 3.3.3. Input and Output

### Printing Strings
Use the `%s` format specifier with `printf()` or `puts()`:

```c
#include <stdio.h>

int main(void) {
    char message[] = "Welcome to C!";

    // Using printf
    printf("%s\n", message);

    // Using puts (automatically appends a newline)
    puts(message);

    return 0;
}
```

### Reading Strings from the User

#### 1. Using `scanf` (Single word only)
`scanf("%s", ...)` stops reading at the first whitespace (space, tab, newline):

```c
char name[30];
printf("Enter your first name: ");
// Note: No '&' needed before name because an array decays to a pointer
scanf("%29s", name); // '%29s' prevents buffer overflows
```

#### 2. Using `fgets` (Recommended for full lines)
To read strings with spaces, use `fgets()`. It reads input safely up to a specified length:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];

    printf("Enter a full sentence: ");
    // Syntax: fgets(buffer, max_size, input_stream)
    fgets(sentence, sizeof(sentence), stdin);

    // Optional: Strip the trailing newline character added by fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("You typed: %s\n", sentence);
    return 0;
}
```

> 🛑 **Never use `gets()`!** It lacks boundary checks and causes buffer overflow vulnerabilities. It was removed from modern C standards.

---

## 3.3.4. Common Library Functions (`<string.h>`)

To manipulate strings, include `<string.h>`:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50] = "Hello";
    char str2[] = "World";
    char str3[50];

    // 1. Length of string (excluding '\0')
    printf("Length of str1: %zu\n", strlen(str1)); // Output: 5

    // 2. Copying strings (strcpy)
    strcpy(str3, str1); // str3 now holds "Hello"

    // 3. Concatenation (strcat)
    strcat(str1, " ");
    strcat(str1, str2); // str1 now holds "Hello World"
    printf("Concatenated: %s\n", str1);

    // 4. Comparison (strcmp)
    // Returns: 0 if equal, negative if s1 < s2, positive if s1 > s2
    if (strcmp(str3, "Hello") == 0) {
        printf("Strings are equal!\n");
    }

    return 0;
}
```

---

## 3.3.5. Arrays vs. String Literals (`char[]` vs `char*`)

It is important to understand the distinction between array strings and pointer strings:

```c
// Modifiable: Allocates memory on the stack and copies "Hello" into it
char strArray[] = "Hello";
strArray[0] = 'M'; // Valid: string becomes "Mello"

// Read-only: Points to literal stored in read-only memory segment
const char *strPtr = "Hello";
// strPtr[0] = 'M'; // CRASH / SEGMENTATION FAULT!
```

**Rule of thumb:** If you need to edit or modify the text in place, use an array (`char str[]`). If you only need to read it, use a pointer to `const char` (`const char *str`).

---

## 3.3.6. Summary Checklist

- [ ] Every string must terminate with `'\0'`.
- [ ] Ensure array size has at least `length + 1` bytes allocated.
- [ ] Prefer `fgets()` over `scanf()` or `gets()` when taking user input.
- [ ] Use functions from `<string.h>` (`strlen`, `strcpy`, `strcat`, `strcmp`) rather than attempting assignment like `str1 = str2`.
## Practice Tutorials

1. Read a line of text using `fgets()` and print its length with `strlen()`.

2. Copy one string into another and compare both strings using `strcpy()` and `strcmp()`.

---

[Next topic: Pointers](Unit_03_04_Pointers.md)

## Related topics
- [1D array](Unit_03_01_1D_Array.md)
- [Array applications](Unit_03_02_Array_Applications.md)
- [Strings in C](Unit_03_03_Strings.md)
- [Pointers](Unit_03_04_Pointers.md)
- [Structures](Unit_03_05_Structures.md)
- [File handling](Unit_03_06_File_Handling.md)

---


[Back to syllabus](../README.md)
