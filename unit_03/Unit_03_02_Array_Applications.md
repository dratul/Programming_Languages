# 3.2 Simple Array Operations

This lesson builds on the array concepts introduced in [1D arrays](Unit_03_01_1D_Array.md). It focuses on common operations: calculating totals and averages, finding extremes, reversing values, searching, and counting.

## Practice Examples

### Example 3.1: Calculating Sum and Average :
Calculate the total and average daily rainfall recorded by a local weather station.

```c
#include <stdio.h>

int main() {
    int rainfall_mm[5] = {75, 82, 68, 91, 79};
    int sum = 0;
    float average;
    int length = 5;

    // Calculate sum of elements
    for (int i = 0; i < length; i++) {
        sum += rainfall_mm[i];
    }

    // Calculate average
    average = (float)sum / length;

    // Display results
    printf("Total rainfall: %d mm\n", sum);
    printf("Average daily rainfall: %.2f mm\n", average);

    return 0;
}
```

#### Output
```text
Total rainfall: 395 mm
Average daily rainfall: 79.00 mm
```

---

### Example 3.2: Finding Maximum and Minimum Elements
Find the highest and lowest rainfall readings in an array.

#### C Source Code
```c
#include <stdio.h>

int main() {
    int rainfall_mm[5] = {75, 82, 68, 91, 79};
    int max = rainfall_mm[0];
    int min = rainfall_mm[0];

    for (int i = 1; i < 5; i++) {
        if (rainfall_mm[i] > max) {
            max = rainfall_mm[i];
        }
        if (rainfall_mm[i] < min) {
            min = rainfall_mm[i];
        }
    }

    printf("Highest rainfall: %d mm\n", max);
    printf("Lowest rainfall: %d mm\n", min);

    return 0;
}
```

#### Output
```text
Highest rainfall: 91 mm
Lowest rainfall: 68 mm
```

---

## Example 3.3: Reversing an Array in Place
Reverse the order of elements inside an array directly without using an auxiliary array.

### C Source Code
```c
#include <stdio.h>

int main() {
    int rainfall_mm[5] = {75, 82, 68, 91, 79};
    int n = 5;

    printf("Original rainfall readings (mm): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rainfall_mm[i]);
    }
    printf("\n");

    // Reverse array logic
    for (int i = 0; i < n / 2; i++)
   {
        int temp = rainfall_mm[i]; // stores one reading temporarily
        rainfall_mm[i] = rainfall_mm[n - 1 - i];
        rainfall_mm[n - 1 - i] = temp;
    }

    printf("Reversed rainfall readings (mm): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rainfall_mm[i]);
    }
    printf("\n");

    return 0;
}
```

#### Output
```text
Original rainfall readings (mm): 75 82 68 91 79 
Reversed rainfall readings (mm): 79 91 68 82 75 
```

---

### Example 3.4: Linear Search in an Array
Search for a target value within an array and display its index position if found.

#### C Source Code
```c
#include <stdio.h>

int main() {
    int rainfall_mm[5] = {75, 82, 68, 91, 79};
    int target = 91;
    int found_index = -1;

    for (int i = 0; i < 5; i++) {
        if (rainfall_mm[i] == target) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("%d mm reading found at index %d.\n", target, found_index);
    } else {
        printf("%d mm reading not found in the array.\n", target);
    }

    return 0;
}
```

#### Output
```text
91 mm reading found at index 3.
```

---

### Example 3.5: Counting Even and Odd Numbers
Count even and odd LED channels in a small electronic display.

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

1. Write a program to reverse daily rainfall readings in place and display the reversed result.

2. Count how many even and odd LED channels are present in a given array.

---

[Next topic: Strings in C](Unit_03_03_Strings.md)

## Related topics
- [1D array](Unit_03_01_1D_Array.md)
- [Array applications](Unit_03_02_Array_Applications.md)
- [Strings in C](Unit_03_03_Strings.md)
- [Pointers](Unit_03_04_Pointers.md)
- [Structures](Unit_03_05_Structures.md)
- [File handling](Unit_03_06_File_Handling.md)

---


[Back to syllabus](../README.md)
