# Unit 1.2: Program Structure, Input/Output, and Compilation

## 1.2.1 Basic Structure of a C Program

There is a close analogy between learning the English language and learning the C language. The classical method of learning English is to first learn the alphabets used in the language, then learn to combine these alphabets to form words, which in turn are combined to form sentences, and sentences are combined to form paragraphs. 

Learning C is similar and easier:
1. Learn the alphabets, digits, and special symbols used in C.
2. Combine them to construct constants, variables, and keywords.
3. Combine these to form instructions.
4. Combine a group of instructions to form a program.

A computer program is a collection of instructions necessary to solve a specific problem. The basic operations form the computer's instruction set, and the approach used to solve the problem is known as an **algorithm**.

### Diagram: Steps in Learning English vs. Steps in Learning C

```
Steps in learning English language:
[ Alphabets ] ---> [ Words ] ---> [ Sentences ] ---> [ Paragraphs ]

Steps in learning C:
[ Alphabets, Digits, Special Symbols ] ---> [ Constants, Variables, Keywords ] ---> [ Instructions ] ---> [ Program ]---Applications
```

### Sections of a C Program

* **Documentation Section:** Contains comments (`/* ... */` or `//`) providing author details, date, and program purpose to improve code readability without affecting execution.
* **Preprocessor Directives (`#include`):** Instructs the compiler to import library header files (e.g., `<stdio.h>` for standard input/output prototypes like `printf()` and `scanf()`) before compilation begins.
* **Definition & Global Section:** Used for defining symbolic constants (e.g., `#define`) and declaring global variables or function prototypes accessible throughout the file.
* **`main()` Function:** The primary entry point where program execution strictly begins and terminates. Every C program must have exactly one `main()` function.
* **Statements & Semicolons:** Executable instructions enclosed within `{}` curly braces; every individual statement must terminate with a semicolon (`;`).
* **User-Defined Functions Section (Optional):** Other user-defined functions can be written outside the `main()` function.
* **Return Statement (`return 0;`):** Signals to the operating system that the program executed and terminated successfully.

### Example 01

```c
#include <stdio.h>

int main(void) {
    printf("Hello World!");
    return 0;
}
```

### Example 02

```c
/* 1. Documentation Section: Comments describing the program */
// Single-line comment: Program to display a welcome message

/* 2. Link / Preprocessor Section */
#include <stdio.h>

/* 3. Definition Section (Optional constants/macros) */
#define PI 3.14159

/* 4. Global Declaration Section (Optional global variables & prototypes) */
int global_count = 0;

/* 5. Main Function Section: Mandatory execution entry point */
int main(void) {
    /* Declaration and Executable statements */
    printf("Welcome to C Programming!\n");
    return 0; // Termination status
}

/* 6. User-Defined Functions Section (Optional) */
```

### Formatted Input and Output with `printf()` and `scanf()`

The `<stdio.h>` header declares standard input/output functions. Use `printf()` to display text and values, and `scanf()` to read formatted values typed by the user.

```c
#include <stdio.h>

int main(void)
{
    int age;
    float height;

    printf("Enter your age and height in metres: ");
    if (scanf("%d %f", &age, &height) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Age: %d\n", age);
    printf("Height: %.2f metres\n", height);
    return 0;
}
```

In `scanf()`, use `&` before ordinary variables so the function can store input in them. A `char` array used for a string is an exception: pass its name without `&`. Always check how many values `scanf()` successfully read; the program above expects two.

| Type | `scanf()` specifier | `printf()` specifier | Example |
| :--- | :--- | :--- | :--- |
| `int` | `%d` | `%d` | `int count;` |
| `float` | `%f` | `%f` | `float temperature;` |
| `double` | `%lf` | `%f` | `double distance;` |
| `char` | `%c` | `%c` | `char initial;` |
| Text in a `char` array | `%s` | `%s` | `char name[20];` |

For `scanf("%s", name)`, input stops at whitespace. Set a field width such as `%19s` for `char name[20]` to leave space for the terminating `'\0'`. Use `fgets()` when you need to read a line containing spaces. In `printf()`, `%.2f` displays a floating-point value with two digits after the decimal point.

The `%c` conversion reads the next character exactly, including whitespace. To skip leftover whitespace before reading a character, put a space before the conversion, as in `scanf(" %c", &initial)`.

---

## 1.2.2 The C Program Development Cycle

```
                      +---------------+
                      |     Start     |
                      +-------+-------+
                              |
                              v
                      +---------------+
               +----->|     Edit      |<---+ (vi file.c)
               |      +-------+-------+    |
               |              |            | [Source program (file.c)]
               |              v            |
               |      +---------------+    v
               |      |    Compile    |----+ (cc file.c)
               |      |(and assemble) |
               |      +-------+-------+
               |              |
               |              v
               |          /-------\        [Object program (file.o)]
        Yes    |         /         \       |
        +------+------- <  Errors?  >      v
               |         \         /
               |          \-------/
               |              | No
               |              v
               |      +---------------+
[Libraries &] -+----->|     Link      |
[other object]        +-------+-------+
[programs    ]                |
                              v
                      +---------------+    [Executable object (a.out)]
                      |    Execute    |---> (a.out)
                      +-------+-------+
                              |
                              v
                          /-------\
                         / Results \  No
               +------- <    OK?    >------+
               |         \         /       |
               |          \-------/        |
               |              | Yes        |
               |              v            |
               |      +---------------+    |
               |      |     Done      |    |
               |      +---------------+    |
               +---------------------------+
```

* **Flow:** Source (`.c`) $\rightarrow$ Compiler (`gcc`) $\rightarrow$ Object (`.o`) $\rightarrow$ Linker $\rightarrow$ Executable (`a.out` / `.exe`).
* Syntax vs. Semantic checks take place during compilation.

---

## 1.2.3 To Compile and Execute a C Program

In Windows PowerShell, you need a C compiler (such as GCC via MinGW or MSVC via Visual Studio).

### Prerequisites Check

Check if GCC is installed:
```powershell
gcc --version
```
If GCC is not recognized, install MinGW-w64 (e.g., via `winget install MSYS2.MSYS2` or `winget install BrechtSanders.MinGW-w64`) and ensure its `bin` folder is added to your system `PATH`.

### Step-by-Step Execution

1. **Create the C File:** Save your code in a file named `hello.c`:
   ```c
   #include <stdio.h>
   int main(void) {
       printf("Hello from PowerShell!\n");
       return 0;
   }
   ```
2. **Navigate to Your File Directory:**
   ```powershell
   cd path\to\your\folder
   ```
3. **Compile the Program:** Run `gcc` to compile the `.c` file into an executable (`.exe`):
   ```powershell
   gcc hello.c -o hello.exe
   ```
4. **Execute the File:** In PowerShell, running a local executable requires the `./` or `.\` relative path prefix:
   ```powershell
   .\hello.exe
   ```

### One-Liner (Compile & Run Together)

```powershell
gcc hello.c -o hello.exe; if ($?) { .\hello.exe }
```

---


---

[Tutorials and assignment](Tutorials_and_Assignment_Unit_01.md)

## Practice Tutorials

1. Write a program with `#include <stdio.h>`, `int main(void)`, and `printf()`/`scanf()` to read and print two integers.

2. Create a small program that reads a student name and marks, then prints the values in a formatted output line.

---

[Next topic: Data types, variables, and constants](Unit_01_03_Data_Types_and_Variables.md)

## Related topics
- [Introduction to C](Unit_01_01_Introduction_to_C.md)
- [Program structure, input/output, and compilation](Unit_01_02_Program_Structure_and_Compilation.md)
- [Data types, variables, and constants](Unit_01_03_Data_Types_and_Variables.md)
- [Operators and expressions](Unit_01_04_Operators.md)
- [Type conversion](Unit_01_05_Type_Conversions.md)
- [Tutorials and assignment](Tutorials_and_Assignment_Unit_01.md)

---


[Back to syllabus](../README.md)
