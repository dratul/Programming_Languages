# 3.2 Simple Array Operations

This lesson builds on the array concepts introduced in [1D arrays](Unit_03_01_1D_Array.md). It focuses on common operations: calculating totals and averages, finding extremes, reversing values, searching, and counting.

## Practice Examples

### Example 3.1: Calculating Sum and Average :
Calculate the total sum and average score of a student's marks stored in an array.

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

#### Output
```text
Total Marks: 395
Average Score: 79.00
```

---

### Example 3.2: Finding Maximum and Minimum Elements
Find the highest and lowest grades in an array of test scores.

#### C Source Code
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

#### Output
```text
Highest Mark: 91
Lowest Mark: 68
```

---

## Example 3.3: Reversing an Array in Place
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
    for (int i = 0; i < n / 2; i++)
   {
        int temp = arr[i]; //stores in temporary variable
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

#### Output
```text
Original Array: 75 82 68 91 79 
Reversed Array: 79 91 68 82 75 
```

---

### Example 3.4: Linear Search in an Array
Search for a target value within an array and display its index position if found.

#### C Source Code
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

#### Output
```text
Element 91 found at index 3.
```

---

### Example 3.5: Counting Even and Odd Numbers
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

#### Output
```text
Total Even Numbers: 3
Total Odd Numbers: 3
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

1. Write a program to reverse the elements of an array in place and display the reversed result.

2. Count how many even and odd numbers are present in a given array.

---

[Next topic: Strings in C](Unit_03_03_Strings.md)

[Back to syllabus](../README.md)
