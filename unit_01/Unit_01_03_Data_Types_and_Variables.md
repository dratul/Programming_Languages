# Unit 1.3: Data Types, Variables, and Constants

## 1.3.1 Data Types in C

Data types in C define the type of data a variable can hold, determining its memory size, range of values, and the operations that can be performed on it. Every variable in C must be declared with a specific data type.

### 1. Basic Data Types (Fundamental / Built-in)

| Data Type | Size (Typical)* | Description | `printf()` specifier | Example |
| :--- | :--- | :--- | :--- | :--- |
| `char` | 1 byte | Stores one character or a small integer value | `%c` | `'A'` |
| `int` | commonly 4 bytes | Stores whole numbers without decimal points | `%d` | `10` |
| `float` | commonly 4 bytes | Stores fractional numbers (about 6–7 significant decimal digits) | `%f` | `3.14f` |
| `double` | commonly 8 bytes | Stores fractional numbers (about 15–17 significant decimal digits) | `%f` | `1.99` |

*\*Note: Sizes and ranges are implementation-dependent; these are common values, not guarantees based only on whether a system is 32-bit or 64-bit. Use `sizeof` to check a type's size on your system. For `scanf()`, use `%f` for `float` and `%lf` for `double`.*

### 2. Derived Data Types

Built by combining or modifying basic data types:
* **Arrays:** A collection of elements of the same data type stored in contiguous memory locations (e.g., `int marks[5];`).
* **Pointers:** Variables that store the memory address of another variable rather than a direct value (e.g., `int *ptr;`).

### 3. User-Defined Data Types

* **`struct` (Structure):** Groups variables of different data types under a single name (e.g., student name, age, roll number).
* **`union`:** Similar to a structure, but all internal members share the exact same memory location to save space.
* **`enum` (Enumeration):** Consists of a set of named integer constants to make code more readable.

---

## 1.3.2 Data Type Modifiers

Modifiers alter the memory size or range of values of basic data types:
* **`signed` / `unsigned`:** `signed` allows both positive and negative values. `unsigned` disallows negative numbers and uses the available range for non-negative values.
* **`short` / `long`:** These specify integer types with different minimum ranges; their exact sizes depend on the implementation. `long long int` is commonly 8 bytes.

---

## 1.3.3 Range of Data Types

The following are common sizes and ranges, not guarantees for every compiler or platform. Use the limits in `<limits.h>` and `<float.h>` when a program needs exact values for its target system.

### 1. Integer Data Types

| Data Type | Size (Bytes) | Range | Format Specifier |
| :--- | :--- | :--- | :--- |
| `char` (plain `char` may be signed or unsigned) | 1 | Implementation-dependent; signed 8-bit `char` commonly ranges from $-128$ to $127$ | `%c` |
| `unsigned char` | 1 | Commonly $0 \text{ to } 255$ | `%c` or `%hhu` |
| `short` (or `short int`) | 2 | $-32,768 \text{ to } 32,767$ | `%hd` |
| `unsigned short` | 2 | $0 \text{ to } 65,535$ | `%hu` |
| `int` (or `signed int`) | 4 | $-2,147,483,648 \text{ to } 2,147,483,647$ | `%d` |
| `unsigned int` | 4 | $0 \text{ to } 4,294,967,295$ | `%u` |
| `long` | commonly 4 or 8 | Depends on the platform and compiler; at least the range of `int` | `%ld` |
| `long long` | commonly 8 | At least $-9,223,372,036,854,775,807$ to $9,223,372,036,854,775,807$ | `%lld` |
| `unsigned long long` | commonly 8 | At least $0$ to $18,446,744,073,709,551,615$ | `%llu` |

### 2. Floating-Point Data Types (Decimals)

| Data Type | Size (Bytes) | Precision | Approximate Range | Format Specifier |
| :--- | :--- | :--- | :--- | :--- |
| `float` | 4 | 6–7 digits | $1.2 \times 10^{-38} \text{ to } 3.4 \times 10^{38}$ | `%f` |
| `double` | commonly 8 | 15–17 digits | About $2.2 \times 10^{-308} \text{ to } 1.8 \times 10^{308}$ | `%f` |
| `long double` | varies | Varies by implementation | Varies by implementation | `%Lf` |

---

## 1.3.4 Constants and Variables

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
| **Storage** | A variable has storage for its value. | A `const` object has storage as required by its use; a `#define` performs text substitution and does not itself create an object. |
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


---

[Tutorials and assignment](Tutorial_unit_01.md)

## Practice Tutorials

1. Declare variables of type `int`, `float`, `double`, and `char`, then print each value with a suitable format specifier.

2. Write a program to display the size in bytes of different data types using `sizeof()`.

---

[Next topic: Operators and expressions](Unit_01_04_Operators.md)

## Related topics
- [Introduction to C](Unit_01_01_Introduction_to_C.md)
- [Program structure, input/output, and compilation](Unit_01_02_Program_Structure_and_Compilation.md)
- [Data types, variables, and constants](Unit_01_03_Data_Types_and_Variables.md)
- [Operators and expressions](Unit_01_04_Operators.md)
- [Type conversion](Unit_01_05_Type_Conversions.md)
- [Tutorials and assignment](Tutorial_unit_01.md)

---


[Back to syllabus](../README.md)
