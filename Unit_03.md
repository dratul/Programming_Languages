# UNIT-03 : Syllabus

**Decision Making and Control Flow (C):**

1\. 1D array — declaration, input, output, traversal

2\. Simple operations — find max, min, sum, average

3\. Strings in C — gets/puts, strlen, strcpy, strcmp

4\. Pointer — concept of address and pointer variable (concept only, not deep)

5\. Structures,

6\. File Handling

## 3.1 1D Array

A one-dimensional array (1D array) is one of the most basic and useful concepts in programming. It allows us to store multiple values of the same data type under a single variable name.

What is an array? Imagine you want to store the marks of five students. Without an array, you might declare five separate variables:

# C Marks Variables Example

Below is the C code representation extracted from your image:

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

---

## Alternative: Using an Array

Instead of creating five individual variables (`m1` to `m5`), you can simplify the code by storing the marks in an array:

```c
#include <stdio.h>

int main() 
{
    int marks[5] = {75, 82, 68, 91, 79};

    // Example: Print all marks using a loop
    for (int i = 0; i < 5; i++) {
        printf("Mark %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
```
This stores five integer values in one array named marks
Key idea: Each element has an index (position), and in C, array indexing starts at 0, not 1.
•	marks[0] gives 75.
•	marks[1] gives 82.
•	marks[4] gives 79.
