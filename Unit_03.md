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

### 1D Array Practice Examples in C

This guide provides practical programming exercises using one-dimensional (1D) arrays in C. Each example includes the scenario, source code, explanation, and expected console output.

---

## Example 1: Calculating Sum and Average

### Scenario
Calculate the total sum and average score of a student's marks stored in an array.

### C Source Code
```c
#include <stdio.h>

int main() {
    int marks[5] = {75, 82, 68, 91, 79};
    int sum = 0;
    float average;
    int length = 5;

    // Calculate sum of elements
    for (int i = 0; i < length; i++) {
        sum += marks[i];
    }

    // Calculate average
    average = (float)sum / length;

    // Display results
    printf("Total Marks: %d\n", sum);
    printf("Average Score: %.2f\n", average);

    return 0;
}
```

### Output
```text
Total Marks: 395
Average Score: 79.00
```

---

## Example 2: Finding Maximum and Minimum Elements

### Scenario
Find the highest and lowest grades in an array of test scores.

### C Source Code
```c
#include <stdio.h>

int main() {
    int marks[5] = {75, 82, 68, 91, 79};
    int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < 5; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }

    printf("Highest Mark: %d\n", max);
    printf("Lowest Mark: %d\n", min);

    return 0;
}
```

### Output
```text
Highest Mark: 91
Lowest Mark: 68
```

---

## Example 3: Reversing an Array in Place

### Scenario
Reverse the order of elements inside an array directly without using an auxiliary array.

### C Source Code
```c
#include <stdio.h>

int main() {
    int arr[5] = {75, 82, 68, 91, 79};
    int n = 5;

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse array logic
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

### Output
```text
Original Array: 75 82 68 91 79 
Reversed Array: 79 91 68 82 75 
```

---

## Example 4: Linear Search in an Array

### Scenario
Search for a target value within an array and display its index position if found.

### C Source Code
```c
#include <stdio.h>

int main() {
    int marks[5] = {75, 82, 68, 91, 79};
    int target = 91;
    int found_index = -1;

    for (int i = 0; i < 5; i++) {
        if (marks[i] == target) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Element %d found at index %d.\n", target, found_index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
```

### Output
```text
Element 91 found at index 3.
```

---

## Example 5: Counting Even and Odd Numbers

### Scenario
Count how many values in an array are even numbers and how many are odd.

### C Source Code
```c
#include <stdio.h>

int main() {
    int numbers[6] = {12, 35, 48, 7, 90, 23};
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < 6; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Total Even Numbers: %d\n", even_count);
    printf("Total Odd Numbers: %d\n", odd_count);

    return 0;
}
```

### Output
```text
Total Even Numbers: 3
Total Odd Numbers: 3
```

---

## Quick Reference Summary

| Operation | Typical Logic | Time Complexity |
| :--- | :--- | :--- |
| **Sum / Avg** | Loop through every element using `sum += arr[i]` | $O(n)$ |
| **Max / Min** | Compare current element with running `max` or `min` | $O(n)$ |
| **Reverse** | Swap `arr[i]` with `arr[n - 1 - i]` up to `n / 2` | $O(n)$ |
| **Linear Search** | Compare each element against `target` | $O(n)$ |