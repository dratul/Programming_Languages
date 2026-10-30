# UNIT-03 : Syllabus

**Instructor:** Dr Atul Kumar Dwivedi  
**Institution:** BIET Jhansi

**Advanced Programming Concepts (C):**

3.1\. 1D array — declaration, input, output, traversal

3.2\. Simple operations — find max, min, sum, average

3.3\. Strings in C — `fgets`/`puts`, `strlen`, `strcpy`, `strcmp`

3.4\. Pointer — concept of address and pointer variable (concept only, not deep)

3.5\. Structures,

3.6\. File Handling

## 3.1 1D Array

A one-dimensional array (1D array) is one of the most basic and useful concepts in programming. It allows us to store multiple values of the same data type under a single variable name.

A **one-dimensional (1D) array** is one of the most fundamental data structures in C. It stores a fixed-size, sequential collection of elements of the **same data type** in contiguous (adjacent) memory locations.

Think of an array like a row of numbered mailboxes or lockers:
- Each box holds **one value** of the same type (all integers, all floats, etc.).
- Every box has an address called an **index**, starting at `0`.

What is an array? Imagine you want to store rainfall readings from five days in an Indian city. Without an array, you might declare five separate variables:

### C Rainfall Variables & Array Example

Below is the original C code representation:

```c
#include <stdio.h>
int main() 
{
    int rain1 = 75;
    int rain2 = 82;
    int rain3 = 68;
    int rain4 = 91;
    int rain5 = 79;
    return 0;
}
```

Instead of creating five individual variables (`rain1` to `rain5`), you can simplify the code by storing the readings in an array:

```c
#include <stdio.h>

int main() 
{
    // Store daily rainfall readings (millimetres) in one array
    int daily_rainfall_mm[5] = {75, 82, 68, 91, 79};

    // Example: Print all rainfall readings using a loop
    for (int i = 0; i < 5; i++) {
        printf("Day %d (Index %d): %d mm\n", i + 1, i, daily_rainfall_mm[i]);
    }

    return 0;
}
```
Key idea: 
This stores five integer rainfall readings in one array named `daily_rainfall_mm`.

### Visual Representation of a 1D Array

| Index 0 | Index 1 | Index 2 | Index 3 | Index 4 |
| :---: | :---: | :---: | :---: | :---: |
| **75 mm** | **82 mm** | **68 mm** | **91 mm** | **79 mm** |

Note: 
* Array name: `daily_rainfall_mm`
* Number of elements: 5
* First index: 0

Each element has an index (position), and in C, array indexing starts at 0, not 1.
* `daily_rainfall_mm[0]` gives 75.
* `daily_rainfall_mm[1]` gives 82.
* `daily_rainfall_mm[4]` gives 79.

When declaring an array in C, you must specify the data type and the number of elements.
```c
#include <stdio.h>

int main(void) {
    // 1. Declaration without initialization (contains garbage values)
    int arr1[5];

    // 2. Declaration with full initialization
    int arr2[5] = {10, 20, 30, 40, 50};

    // 3. Partial initialization (remaining elements are automatically set to 0)
    int arr3[5] = {10, 20}; // {10, 20, 0, 0, 0}

    // 4. Initializing all elements to 0
    int arr4[5] = {0};

    // 5. Implicit sizing (compiler infers size = 4)
    int arr5[] = {1, 2, 3, 4};

    return 0;
}
```


---

## 1. Array Declaration & Initialization

### A. Declaration Syntax
Before using an array, you must tell the compiler:
1. The **data type** of the elements it will hold.
2. The **name** of the array.
3. The **size** (number of elements) enclosed in square brackets `[]`.

```c
data_type array_name[array_size];
```

#### Example:
```c
int district_visitors[5]; // Allocates space for 5 integer visitor counts
float prices[10]; // Allocates space for 10 floating-point numbers
char letters[26]; // Allocates space for 26 characters
```

> **Warning:** When declared without initialization, the elements contain **garbage values** (unpredictable numbers left in memory).

---

### B. Initialization
You can assign values at the time of declaration using an initializer list `{}`.

#### 1. Full Initialization
```c
int numbers[5] = {10, 20, 30, 40, 50};
```

#### 2. Partial Initialization
If you initialize fewer elements than the allocated size, the remaining elements are automatically set to `0`:
```c
int numbers[5] = {10, 20}; 
// numbers[0] = 10, numbers[1] = 20, numbers[2] = 0, numbers[3] = 0, numbers[4] = 0
```

#### 3. Zero-Initialization
To clear an entire array to zero:
```c
int numbers[5] = {0}; // All 5 elements are set to 0
```

#### 4. Automatic Sizing (Implicit Size)
If you provide an initializer list, you can omit the size inside `[]`; the compiler determines it automatically:
```c
int numbers[] = {1, 2, 3, 4, 5}; // Compiler allocates size 5
```

---

## 2. Array Indexing

In C, arrays use **zero-based indexing**:
- The first element is at index `0`.
- The second element is at index `1`.
- The last element is at index `size - 1`.

For an array of size $N$:
$$\text{Valid Indices} = [0, 1, 2, \dots, N - 1]$$

| Element Value | `10` | `20` | `30` | `40` | `50` |
|:---:|:---:|:---:|:---:|:---:|:---:|
| **Index** | `0` | `1` | `2` | `3` | `4` |

---

## 3. Inputting Data into a 1D Array

To take input from the user, use `scanf()` inside a loop. Remember that `scanf` requires the memory address (`&`) of each element.

```c
#include <stdio.h>

#define SIZE 5

int main(void) {
    int daily_rainfall_mm[SIZE];

    printf("Enter rainfall readings in millimetres for %d days:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Day %d: ", i + 1);
        if (scanf("%d", &daily_rainfall_mm[i]) != 1) {
            printf("Invalid rainfall reading.\n");
            return 1;
        }
    }

    return 0;
}
```

---

## 4. Array Traversal & Output

**Traversal** means visiting each element of the array sequentially to perform an action (such as printing, searching, or modifying).

A standard `for` loop running from index `0` up to `size - 1` is the standard way to traverse an array.

```c
#include <stdio.h>

#define SIZE 5

int main(void) {
    int solar_voltage_mv[SIZE] = {120, 240, 360, 480, 600};

    printf("Solar panel readings (millivolts):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("solar_voltage_mv[%d] = %d\n", i, solar_voltage_mv[i]);
    }

    return 0;
}
```

---

## 5. Complete Working Example

Here is a full program combining **declaration**, **user input**, **traversal**, and **output**, along with a practical calculation (finding the sum):

```c
#include <stdio.h>

int main(void) {
    int n;

    // Ask user for array length
    printf("Enter number of elements (1 to 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input size.\n");
        return 1;
    }

    int visitor_counts[100]; // 1. Declaration

    // 2. Input
    printf("\n--- Heritage Site Visitor Counts ---\n");
    for (int i = 0; i < n; i++) {
        printf("Enter visitors for site %d: ", i + 1);
        if (scanf("%d", &visitor_counts[i]) != 1) {
            printf("Invalid visitor count.\n");
            return 1;
        }
    }

    // 3. Traversal & Output
    printf("\n--- Output ---\n");
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        printf("Site %d visitors = %d\n", i + 1, visitor_counts[i]);
        total_sum += visitor_counts[i]; // Accumulating sum during traversal
    }

    // Display summary
    printf("\nTotal visitors: %d\n", total_sum);
    printf("Average visitors per site: %.2f\n", (float)total_sum / n);

    return 0;
}
```

---





### Quick Reference Summary

| Operation | Typical Logic | Time Complexity |
| :--- | :--- | :--- |
| **Sum / Avg** | Loop through every element using `sum += arr[i]` | $O(n)$ |
| **Max / Min** | Compare current element with running `max` or `min` | $O(n)$ |
| **Reverse** | Swap `arr[i]` with `arr[n - 1 - i]` up to `n / 2` | $O(n)$ |
| **Linear Search** | Compare each element against `target` | $O(n)$ |

## Practice Tutorials

1. Read five rainfall readings for a local weather station into an array and print their sum and average.

2. Find the largest and smallest visitor counts among several Indian heritage sites.

---

[Next topic: Simple array operations](Unit_03_02_Array_Applications.md)

## Why this unit matters

* Arrays help store many values under one name, which is essential in scientific and engineering calculations.
* Strings, pointers, and structures are the building blocks of data handling in real programs.
* File handling makes it possible to save, read, and process data for lab records, reports, and projects.

## AKTU Previous-Year Practice Questions

1. Write a C program to read five integers into an array and display their sum and average.
2. Explain `strcpy()`, `strlen()`, and `strcmp()` with suitable examples in C.
3. Define a `struct HeritageSite` with fields for name, state, and visitor count and write a program to input and print the data.

---

## Related topics
- [1D array](Unit_03_01_1D_Array.md)
- [Array applications](Unit_03_02_Array_Applications.md)
- [Strings in C](Unit_03_03_Strings.md)
- [Pointers](Unit_03_04_Pointers.md)
- [Structures](Unit_03_05_Structures.md)
- [File handling](Unit_03_06_File_Handling.md)

---


[Back to syllabus](../README.md)
