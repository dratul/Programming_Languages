# UNIT 01: Programming Basics (C)

---

## 1.1 Syllabus

* **Programming Basics (C):**
  1. Structure of a C program; compilation and execution
  2. Input/output: `scanf` / `printf` in C
  3. Data types, variables, constants
  4. Operators (arithmetic, relational, logical)
  5. Type conversion; simple expressions
* **Real connect:** C powers embedded systems, microcontrollers, and OS kernels.

---

## 1.2 History

The C programming language was developed in the early 1970s at Bell Laboratories by Dennis Ritchie. It was created to overcome the limitations of earlier languages like B and BCPL and to facilitate the rewriting of the UNIX operating system.

### Origins & Lineage

* **ALGOL 60 (1960):** Introduced structured programming concepts and block structure.
* **CPL & BCPL (1963–1967):** Cambridge and London universities developed CPL, which Martin Richards later simplified into BCPL (Basic Combined Programming Language)—a typeless system language.
* **B Language (1969–1970):** Ken Thompson adapted BCPL to fit the resource constraints of the DEC PDP-7 machine at Bell Labs while creating the first version of UNIX.
* **C Language (1972–1973):** Dennis Ritchie extended B by adding data types, structures, and memory manipulation capabilities (pointers) to rewrite the UNIX kernel on the DEC PDP-11.

### Key Standardization Milestones

| Standard | Year | Key Contributions & Context |
| :--- | :--- | :--- |
| **K&R C** | 1978 | Brian Kernighan and Dennis Ritchie published *The C Programming Language*, establishing the de facto standard specification. |
| **ANSI C (C89) / ISO C (C90)** | 1989 / 1990 | Standardized function prototypes, `void` type, standard library headers (`<stdio.h>`, `<stdlib.h>`), and portability rules. |
| **C99** | 1999 | Introduced inline functions, single-line comments (`//`), variable-length arrays (VLAs), `long long int`, and the `<stdbool.h>` boolean type. |
| **C11** | 2011 | Added multi-threading support (`<threads.h>`), atomic operations (`<stdatomic.h>`), type-generic expressions (`_Generic`), and bounds-checking interfaces. |
| **C17 / C18** | 2018 | Addressed technical corrections, defects, and clarifications without introducing major language features. |
| **C23** | 2024 | Modernized syntax with `nullptr`, `auto` type inference for local variables, `constexpr`, and standard attributes (`[[nodiscard]]`, `[[deprecated]]`). |

### Impact on Modern Computing

* **Operating Systems:** C remains the foundation for major OS kernels, including Linux, macOS, and Windows.
* **Language Offshoots:** Its syntax and paradigm heavily influenced subsequent languages, including C++, Objective-C, Java, C#, JavaScript, PHP, and Rust.
* **Systems & Embedded Tech:** Continues to dominate firmware, microcontrollers, embedded IoT systems, and high-performance game and graphics engines.

---

## 1.3 Why C is Taught to EE/ECE Students

C is foundational for Electrical, Electronics, and Communication Engineering (ECE) students because it bridges the gap between software logic and hardware execution.

### Hardware & Microcontroller Interfacing

* **Embedded Systems Foundation:** Most microcontrollers (e.g., ARM Cortex, 8051, AVR, PIC) and embedded devices are programmed using C due to its direct hardware manipulation capabilities.
* **Registers and Memory Mapping:** C allows direct pointer arithmetic and bit-level operations to read from and write to specific memory-mapped I/O registers, GPIO pins, and communication peripherals (UART, SPI, $I^2C$).
* **IoT & Sensor Reading:** ECE applications often require reading analog/digital sensor data into memory buffers, configuring timers, and managing communication modules, where C provides precise execution timing.

### Performance & Direct Memory Control

* **Low-Level Memory Access:** Features like pointers, reference operators (`&`, `*`), and structures allow students to understand dynamic memory layout and manage continuous RAM blocks without intermediate abstraction layers.
* **Resource Efficiency:** Embedded microcontrollers operate with strictly limited Flash memory and RAM; C produces minimal, high-speed machine code compared to garbage-collected or interpreted languages.

### Signal Processing & System Infrastructure

* **Firmware and OS Kernels:** System-level architecture, device drivers, and real-time operating system (RTOS) kernels are built primarily in C.
* **Digital Signal Processing (DSP):** Implementing real-time filtering, Fast Fourier Transforms (FFT), and communication protocol stacks requires minimal execution latency, which C natively delivers.

---

## 1.4 Basic Structure of a C Program

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
[ Alphabets, Digits, Special Symbols ] ---> [ Constants, Variables, Keywords ] ---> [ Instructions ] ---> [ Program ]
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

int main() {
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

---

## 1.5 Practice Platforms for C Programming (IDE)

1. **CodeChef:** [https://www.codechef.com/practice/c](https://www.codechef.com/practice/c)
2. **HackerRank:** [https://www.hackerrank.com/domains/c](https://www.hackerrank.com/domains/c)

---

## 1.6 Programming Languages

A programming language is a formal set of instructions, commands, and syntax used by programmers to write software and communicate instructions to a computer to execute specific tasks.
* It bridges human logic with machine-readable binary code ($0\text{s}$ and $1\text{s}$).

### Classification of Programming Languages

#### A. Low-Level Languages

* **Machine-Level Language:**
  * Consists purely of binary digits ($0\text{s}$ and $1\text{s}$).
  * Directly executed by the CPU hardware without requiring translation.
  * Machine-dependent (non-portable), difficult to write, tedious to maintain, and highly error-prone.
* **Assembly Language:**
  * Replaces binary patterns with human-readable mnemonic abbreviations (such as `MOV`, `ADD`, `SUB`, `JMP`).
  * Interacts directly with CPU registers and memory addresses, making it hardware- and architecture-dependent (non-portable).
  * Requires a dedicated language translator called an **Assembler** to convert mnemonics into machine code.

#### B. Middle-Level Language (The Special Role of C)

* **Why C is Classified as Middle-Level:**
  It combines the direct hardware/memory control of low-level languages with the user-friendly abstraction, structured design, and portability of high-level languages.
* **Low-Level Capabilities in C:**
  * Direct memory access and manipulation using pointers and memory addresses.
  * Bitwise operations (`&`, `|`, `^`, `~`, `<<`, `>>`) for modifying individual bits in hardware registers.
  * Ideal for building operating system kernels, device drivers, firmware, and embedded microcontroller systems.
  * Inline assembly support for direct CPU instruction execution.
* **High-Level Capabilities in C:**
  * Human-readable English-like syntax and structured programming (functions, loops, conditional branching).
  * Rich data typing (`int`, `float`, `char`, `struct`, `union`).
  * Portability: Source code written for one architecture can be compiled and executed on different platforms with minimal changes.

#### C. High-Level Languages

* **Overview:** Designed to be human-readable, completely abstracting away underlying CPU registers, memory layouts, and processor architecture.
* **Examples:** Python, Java, C#, Ruby, Pascal.
* **Portability:** Highly portable across diverse operating systems and CPU architectures.
* **Execution:** Programs cannot run directly on the CPU; they must be processed by a compiler or an interpreter.

### Comparison Matrix

| Feature | Low-Level Language | Middle-Level Language (C) | High-Level Language (Python/Java) |
| :--- | :--- | :--- | :--- |
| **Readability** | Poor (Binary / Mnemonics) | High (Structured, English-like) | Very High (Close to natural language) |
| **Portability** | Non-portable (Machine-dependent) | Portable across platforms | Highly Portable ("Write Once, Run Anywhere") |
| **Hardware Control** | Direct (Registers / I/O) | Direct (Pointers, bit manipulation) | Abstracted / Restricted access |
| **Execution Speed** | Fastest | Extremely Fast | Slower (VM / Interpreter overhead) |
| **Memory Management** | Manual (Hardware level) | Explicit (Pointers, `malloc`/`free`) | Automatic (Garbage Collection) |

### Types of Language Translators

Computers only understand machine code. Translators convert source code into machine code:

| Translator | Input Language | Working Mechanism | Error Reporting | Typical Use Case |
| :--- | :--- | :--- | :--- | :--- |
| **Assembler** | Assembly Language | Translates mnemonic instructions directly into corresponding binary machine code. | Reports assembly syntax errors. | Device drivers, low-level firmware. |
| **Compiler** | High-Level / Middle-Level Language | Scans the entire source code at once, checks syntax, and generates a standalone executable file (`.exe` / `a.out`) before runtime. | Lists all syntax/semantic errors after scanning the complete file. | C, C++, Rust, Go (Large system software). |
| **Interpreter** | High-Level Language | Translates and executes instructions line by line in real-time. | Pauses execution immediately upon encountering an error on a specific line. | Python, Ruby, JavaScript (Scripting, automation). |

---

## 1.7 The C Program Development Cycle

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

## 1.8 To Compile and Execute a C Program

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

## 1.9 Tutorials / Practice Programs & Quick Quiz

* Practice submissions can be made on [onlinegdb.com](https://www.onlinegdb.com/).

### Quick Quiz & Concept Check

1. **What is the role of the linker in C program compilation?**
   * A) Translates source code line-by-line into machine instructions
   * B) Combines object code with system library code to produce an executable
   * C) Checks syntax errors in preprocessor directives
   * D) Loads the program into primary RAM memory for immediate running

2. **Which of the following is an invalid identifier in C?**
   * A) `total_score`
   * B) `sum2`
   * C) `2nd_value`
   * D) `netSalary`

3. **What happens if a statement does not end with a semicolon (`;`) in C?**
   * A) The compiler reports a syntax error during compilation.
   * B) The runtime loader fixes it automatically.
   * C) The linker skips the instruction.
   * D) A warning is given, but compilation succeeds.

4. **Why is `#include <stdio.h>` required in programs using `printf()`?**
   * A) It contains the actual machine code of the OS kernel.
   * B) It informs the compiler about the prototypes and declarations of standard input/output functions.
   * C) It reserves space in the CPU registers.
   * D) It initializes all local variables to zero.

### Answer Key

| Question | Correct Option | Brief Explanation |
| :--- | :--- | :--- |
| **Q1** | **B** | The linker merges the translated object file (`.o`) with library routines to create the standalone executable (`a.out` / `.exe`). |
| **Q2** | **C** | Identifiers cannot start with a numeric digit (`2nd_value`). |
| **Q3** | **A** | Semicolons are mandatory statement terminators; omitting one causes a compilation syntax error. |
| **Q4** | **B** | `<stdio.h>` provides the function prototypes and definitions for I/O operations like `printf()` and `scanf()`. |

---

## 1.10 Data Types in C

Data types in C define the type of data a variable can hold, determining its memory size, range of values, and the operations that can be performed on it. Every variable in C must be declared with a specific data type.

### 1. Basic Data Types (Fundamental / Built-in)

| Data Type | Size (Typical)* | Description | Format Specifier | Example |
| :--- | :--- | :--- | :--- | :--- |
| `char` | 1 byte | Stores a single character or ASCII value | `%c` | `'A'` |
| `int` | 2 or 4 bytes | Stores whole numbers without decimal points | `%d` | `10` |
| `float` | 4 bytes | Stores fractional numbers (6–7 decimal digits precision) | `%f` | `3.14` |
| `double` | 8 bytes | Stores fractional numbers (15 decimal digits precision) | `%lf` | `1.99` |

*\*Note: The exact size depends on the system architecture (16-bit, 32-bit, or 64-bit).*

### 2. Derived Data Types

Built by combining or modifying basic data types:
* **Arrays:** A collection of elements of the same data type stored in contiguous memory locations (e.g., `int marks[5];`).
* **Pointers:** Variables that store the memory address of another variable rather than a direct value (e.g., `int *ptr;`).

### 3. User-Defined Data Types

* **`struct` (Structure):** Groups variables of different data types under a single name (e.g., student name, age, roll number).
* **`union`:** Similar to a structure, but all internal members share the exact same memory location to save space.
* **`enum` (Enumeration):** Consists of a set of named integer constants to make code more readable.

---

## 1.11 Data Type Modifiers

Modifiers alter the memory size or range of values of basic data types:
* **`signed` / `unsigned`:** `signed` allows both positive and negative values. `unsigned` disallows negative numbers, doubling the positive range.
* **`short` / `long`:** `short` decreases the memory size (and range) of integers; `long` increases it (e.g., `long long int` allocates 8 bytes).

---

## 1.12 Range of Data Types

Sizes and value ranges on standard 32-bit and 64-bit systems (where `int` is 4 bytes):

### 1. Integer Data Types

| Data Type | Size (Bytes) | Range | Format Specifier |
| :--- | :--- | :--- | :--- |
| `char` (or `signed char`) | 1 | $-128 \text{ to } 127$ | `%c` or `%d` |
| `unsigned char` | 1 | $0 \text{ to } 255$ | `%c` or `%u` |
| `short` (or `short int`) | 2 | $-32,768 \text{ to } 32,767$ | `%hd` |
| `unsigned short` | 2 | $0 \text{ to } 65,535$ | `%hu` |
| `int` (or `signed int`) | 4 | $-2,147,483,648 \text{ to } 2,147,483,647$ | `%d` |
| `unsigned int` | 4 | $0 \text{ to } 4,294,967,295$ | `%u` |
| `long` | 4 or 8 | On 64-bit Linux: Same as `long long`<br>On 32-bit/Windows: Same as `int` | `%ld` |
| `long long` | 8 | $-9,223,372,036,854,775,808 \text{ to } 9,223,372,036,854,775,807$ | `%lld` |
| `unsigned long long` | 8 | $0 \text{ to } 18,446,744,073,709,551,615$ | `%llu` |

### 2. Floating-Point Data Types (Decimals)

| Data Type | Size (Bytes) | Precision | Approximate Range | Format Specifier |
| :--- | :--- | :--- | :--- | :--- |
| `float` | 4 | 6–7 digits | $1.2 \times 10^{-38} \text{ to } 3.4 \times 10^{38}$ | `%f` |
| `double` | 8 | 15–17 digits | $2.3 \times 10^{-308} \text{ to } 1.7 \times 10^{308}$ | `%lf` |
| `long double` | 12 or 16 | 19 digits | $3.4 \times 10^{-4932} \text{ to } 1.1 \times 10^{4932}$ | `%Lf` |

---

## 1.13 Constants and Variables

A **variable** is a named location in memory used to store data that can be modified during program execution. Variables are also called identifiers.

### Syntax
```c
data_type variable_name = initial_value;
```

### Rules for Naming Variables (Identifiers)
* Must begin with an alphabet letter (`A-Z`, `a-z`) or an underscore (`_`).
* Can contain letters, digits (`0-9`), and underscores.
* Cannot use C reserved keywords (e.g., `int`, `float`, `return`, `for`).
* Cannot contain whitespace, hyphens, or special punctuation characters.
* C is strictly case-sensitive (`total`, `Total`, and `TOTAL` are distinct variables).

A **constant** (or literal) is a fixed value that cannot be altered by the program during execution:
```c
const double PI = 3.14159;
#define MAX_BUFFER_SIZE 1024
```

### Comparison: Variable vs. Constant

| Feature | Variable | Constant |
| :--- | :--- | :--- |
| **Value Modification** | Value can change throughout runtime. | Value remains fixed and immutable. |
| **Declaration** | `int count = 10;` | `const int COUNT = 10;` or `#define COUNT 10` |
| **Memory Allocation** | Allocated in RAM during execution. | `const` uses RAM; `#define` literals are placed directly in code/read-only memory. |
| **Primary Use** | Holding temporary inputs, calculations, and counters. | Fixed parameters (e.g., mathematical constants, buffer limits). |

### Example Code

```c
#include <stdio.h>

#define TAX_RATE 0.05 // Preprocessor constant

int main(void) {
    const int ITEM_LIMIT = 100; // Read-only constant
    int quantity = 10;          // Variable (can change)
    double unit_price = 25.50;  // Variable

    // Calculate total price
    double subtotal = quantity * unit_price;
    double final_total = subtotal + (subtotal * TAX_RATE);

    printf("Quantity: %d (Limit: %d)\n", quantity, ITEM_LIMIT);
    printf("Final Total with Tax: $%.2f\n", final_total);

    // Modifying a variable
    quantity = 15;
    printf("Updated Quantity: %d\n", quantity);

    return 0;
}
```

---

## 1.14 Operators in C

Operators are special symbols used to perform operations on variables and values (operands).

* **Arithmetic Operators:** Perform standard mathematical operations:
  `+` (Addition), `-` (Subtraction), `*` (Multiplication), `/` (Division), `%` (Modulus/Remainder)
* **Relational Operators:** Compare two values and evaluate to $1$ (true) or $0$ (false):
  `==` (Equal to), `!=` (Not equal to), `>` (Greater than), `<` (Less than), `>=` (Greater than or equal to), `<=` (Less than or equal to)
* **Logical Operators:** Combine multiple conditions:
  `&&` (Logical AND), `||` (Logical OR), `!` (Logical NOT)
* **Bitwise Operators:** Perform operations at the binary/bit level:
  `&` (Bitwise AND), `|` (Bitwise OR), `^` (Bitwise XOR), `~` (Bitwise NOT), `<<` (Left shift), `>>` (Right shift)
* **Assignment Operators:** Assign values to variables:
  `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `&=`, `|=`, `^=`, `<<=`, `>>=`
* **Increment & Decrement Operators:** Modify a numeric variable by 1:
  `++` (Increment: prefix `++a` or postfix `a++`), `--` (Decrement: prefix `--a` or postfix `a--`)
* **Conditional (Ternary) Operator:** Shorthand for simple if-else branching:
  `condition ? expression_if_true : expression_if_false;`
* **Special Operators:**
  * `sizeof`: Evaluates size in bytes.
  * `&`: Address-of operator.
  * `*`: Dereference / pointer operator.
  * `,`: Comma operator (evaluates expressions sequentially from left to right).
  * `->` and `.`: Member access operators for structs and unions.

---

## 1.15 Operator Precedence & Associativity

| Precedence Group | Operators | Associativity |
| :--- | :--- | :--- |
| **1. Postfix** | `()`, `[]`, `->`, `.`, `++`, `--` | Left to Right |
| **2. Unary** | `+`, `-`, `!`, `~`, `++`, `--`, `(type)`, `*`, `&`, `sizeof` | Right to Left |
| **3. Multiplicative** | `*`, `/`, `%` | Left to Right |
| **4. Additive** | `+`, `-` | Left to Right |
| **5. Shift** | `<<`, `>>` | Left to Right |
| **6. Relational** | `<`, `<=`, `>`, `>=` | Left to Right |
| **7. Equality** | `==`, `!=` | Left to Right |
| **8. Bitwise AND** | `&` | Left to Right |
| **9. Bitwise XOR** | `^` | Left to Right |
| **10. Bitwise OR** | `|` | Left to Right |
| **11. Logical AND** | `&&` | Left to Right |
| **12. Logical OR** | `||` | Left to Right |
| **13. Conditional** | `?:` | Right to Left |
| **14. Assignment** | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, etc. | Right to Left |
| **15. Comma** | `,` | Left to Right |

### Practice Code

```c
#include <stdio.h>

int main(void) {
    int a = 10, b = 3;

    // Arithmetic
    printf("a + b = %d\n", a + b);
    printf("a / b = %d (Integer division)\n", a / b);
    printf("a %% b = %d (Remainder)\n", a % b);

    // Relational & Logical
    int is_valid = (a > b) && (b != 0);
    printf("Logical Result: %d\n", is_valid);

    // Ternary Operator
    int max = (a > b) ? a : b;
    printf("Max value: %d\n", max);

    // Bitwise Operator
    printf("Bitwise AND (10 & 3): %d\n", a & b);

    return 0;
}
```

---

## 1.16 Type Conversions

In C programming, every variable has a data type. Converting a value from one data type to another is called **type conversion** or **type casting**.

```c
int a = 10;
float b;
b = a; // 10 is converted to 10.0
```

There are two main types:
1. **Implicit Type Conversion** (Automatic)
2. **Explicit Type Conversion** (Type Casting)

---

### Implicit Type Conversion

Implicit conversion is performed automatically by the C compiler without special instructions.

#### Example: `int` to `float`

```c
// Type conversion in C
#include <stdio.h>

int main() {
    int a = 10;
    float b;
    b = a;

    printf("\n a = %d \n", a);
    printf("\n b = %.2f \n", b);
    return 0;
}
```
**Output:**
```
a = 10 
b = 10.00 
```
*Concept:*
$$25 \text{ (int)} \longrightarrow 25.0 \text{ (float)}$$
This conversion is generally safe because `float` can represent fractional values that `int` cannot.

#### Conversion from `float` to `int` (Truncation)

```c
#include <stdio.h>

int main() {
    float x = 25.75;
    int y = x;

    printf("x = %.2f\n", x);
    printf("y = %d\n", y);
    return 0;
}
```
**Output:**
```
x = 25.75
y = 25
```
*Important:* This does not round $25.75$ to $26$. The fractional part is discarded.

#### Conversion Between `char` and `int`

In C, a `char` is stored as an integer character code (ASCII).

```c
#include <stdio.h>

int main() {
    char ch = 'A';
    int x = ch;

    printf("Character = %c\n", ch);
    printf("Integer value = %d\n", x);
    return 0;
}
```
**Output:**
```
Character = A
Integer value = 65
```

Similarly:
```c
int x = 66;
char ch = x;
printf("%c", ch); // Output: B
```

#### Arithmetic with Different Data Types

```c
int a = 10;
float b = 3.5;
float result = a + b;
```
*Concept:*
$$10 + 3.5 \longrightarrow 10.0 + 3.5 \longrightarrow 13.5$$
`result = 13.5`

#### Integer Division: A Common Beginner Mistake

```c
int a = 5;
int b = 2;
printf("%d", a / b); // Output: 2
```
Since both operands are integers, C performs integer division:
$$\frac{5}{2} = 2 \quad (\text{fractional part discarded})$$

**How to get 2.50:**
```c
int a = 5;
int b = 2;
float result = (float)a / b;
printf("%.2f", result); // Output: 2.50
```
`(float)a` converts `a` to `5.0`. The expression becomes $5.0 / 2 = 2.5$.

---

### Explicit Type Conversion (Type Casting)

When the programmer explicitly instructs C to convert a value:

```c
(data_type) expression
```

#### Example of Type Casting

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    float result;

    result = (float)a / b;
    printf("Result = %.2f\n", result);
    return 0;
}
```
**Output:**
```
Result = 3.33
```

#### Type Casting a Floating-Point Number to `int`

```c
#include <stdio.h>

int main() {
    float price = 99.99;
    int amount;

    amount = (int)price;
    printf("Price = %.2f\n", price);
    printf("Amount = %d\n", amount);
    return 0;
}
```
**Output:**
```
Price = 99.99
Amount = 99
```

---

### Common Conversion Hierarchy

When evaluating mixed expressions, C promotes smaller types to larger types:

```
char
  ↓
int
  ↓
long
  ↓
long long
  ↓
float
  ↓
double
  ↓
long double
```

#### Example with `int` and `double`

```c
#include <stdio.h>

int main() {
    int a = 10;
    double b = 2.5;
    double result = a + b;

    printf("Result = %.2lf\n", result);
    return 0;
}
```
**Output:**
```
Result = 12.50
```

---

### Type Conversion During Assignment & Data Loss

```c
double x = 15.87;
int y = (int)x; // y becomes 15 (.87 is lost)
```
Converting from a type capable of representing more information to one capable of representing less can lead to precision loss or overflow.

---

### Type Conversion and User Input

Calculating the average of two numbers:

```c
#include <stdio.h>

int main() {
    int a, b;
    float average;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    average = (float)(a + b) / 2;
    printf("Average = %.2f\n", average);
    return 0;
}
```
If the user enters `5` and `6`:
```
Average = 5.50
```

---

### Casting Before vs. After Division

* **Incorrect:**
  ```c
  float result = (float)(5 / 2);
  // (5 / 2) evaluates to 2 first; (float)2 = 2.0
  ```
* **Correct:**
  ```c
  float result = (float)5 / 2;
  // 5.0 / 2 evaluates to 2.5
  ```

---

### Percentage Calculation Example

```c
#include <stdio.h>

int main() {
    int obtained = 450;
    int total = 500;
    float percentage;

    percentage = (float)obtained / total * 100;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
```
**Output:**
```
Percentage = 90.00%
```

---

### Implicit vs. Explicit Conversion Summary

| Feature | Implicit Conversion | Explicit Conversion |
| :--- | :--- | :--- |
| **Performed by** | Compiler | Programmer |
| **Also called** | Automatic conversion | Type casting |
| **Syntax required** | No | Yes |
| **Example** | `float x = 10;` | `float x = (float)10;` |
| **Control** | Less | More |

---

### Common Beginner Mistakes

1. **Expecting decimal output from integer division:**
   ```c
   int a = 5, b = 2;
   float result = a / b; // Evaluates to 2.00, NOT 2.50
   // Correct: float result = (float)a / b;
   ```
2. **Casting too late:**
   ```c
   float result = (float)(a / b); // Division truncates before casting!
   // Correct: float result = (float)a / b;
   ```
3. **Assuming casting rounds:**
   ```c
   int x = (int)9.99; // Results in 9, NOT 10
   ```
4. **Ignoring data loss:**
   ```c
   int x = (int)123.456; // Truncates decimal digits
   ```

---

### Type Conversion vs. Type Casting

* **Type Conversion:** A general term for changing a value from one type to another (can be implicit or explicit).
* **Type Casting:** An explicit operation where the programmer specifies the conversion syntax `(type)value`.