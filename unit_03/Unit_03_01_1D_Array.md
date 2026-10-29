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

What is an array? Imagine you want to store the marks of five students. Without an array, you might declare five separate variables:

### C Marks Variables & Array Example

Below is the original C code representation:

```c
#include <stdio.h>
int main() 
{
    int m1 = 75;
    int m2 = 82;
    int m3 = 68;
    int m4 = 91;
    int m5 = 79;
    return 0;
}
```

Instead of creating five individual variables (`m1` to `m5`), you can simplify the code by storing the marks in an array:

```c
#include <stdio.h>

int main() 
{
    // Storing five integer values in a 1D array named marks
    int marks[5] = {75, 82, 68, 91, 79};

    // Example: Print all marks using a loop
    for (int i = 0; i < 5; i++) {
        printf("Mark %d (Index %d): %d\n", i + 1, i, marks[i]);
    }

    return 0;
}
```
Key idea: 
This stores five integer values in one array named `marks`.

### Visual Representation of a 1D Array

| Index 0 | Index 1 | Index 2 | Index 3 | Index 4 |
| :---: | :---: | :---: | :---: | :---: |
| **75** | **82** | **68** | **91** | **79** |

Note: 
* Array name: `marks`
* Number of elements: 5
* First index: 0

Each element has an index (position), and in C, array indexing starts at 0, not 1.
*	marks[0] gives 75.
*	marks[1] gives 82.
*	marks[4] gives 79.

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
int scores[5];   // Allocates space for 5 integers
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
    int arr[SIZE];

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid integer.\n");
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
    int arr[SIZE] = {12, 24, 36, 48, 60};

    printf("Traversing and printing elements:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
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

    int arr[100]; // 1. Declaration

    // 2. Input
    printf("\n--- Input ---\n");
    for (int i = 0; i < n; i++) {
        printf("Enter value for index [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid integer.\n");
            return 1;
        }
    }

    // 3. Traversal & Output
    printf("\n--- Output ---\n");
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        total_sum += arr[i]; // Accumulating sum during traversal
    }

    // Display summary
    printf("\nTotal Sum: %d\n", total_sum);
    printf("Average: %.2f\n", (float)total_sum / n);

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

1. Read five integers into an array and print their sum and average.

2. Find the largest and smallest values in an integer array and display them.

---

[Next topic: Simple array operations](Unit_03_02_Array_Applications.md)

## Why this unit matters

* Arrays help store many values under one name, which is essential in scientific and engineering calculations.
* Strings, pointers, and structures are the building blocks of data handling in real programs.
* File handling makes it possible to save, read, and process data for lab records, reports, and projects.

## AKTU Previous-Year Practice Questions

1. Write a C program to read five integers into an array and display their sum and average.
2. Explain `strcpy()`, `strlen()`, and `strcmp()` with suitable examples in C.
3. Define a `struct Student` with fields for name, roll number, and marks and write a program to input and print the data.

---

[Back to syllabus](../README.md)
