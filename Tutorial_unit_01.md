## Unit-01 Tutorial & Assignment Document

```
================================================================================
                    DEPARTMENT OF Electrical, Electronics & Communication Engineering
                   COURSE: ACS101 - Programming Languages 
                   UNIT-01: BASICS OF C, DATA TYPES, OPERATORS & I/O
================================================================================
```

### Course Objectives & Outcomes (Unit 01)
By the end of this tutorial unit, students will be able to:
1. Understand basic C program structure, preprocessor directives, and compilation flow.
2. Correctly use standard formatted I/O (`printf` and `scanf`).
3. Select appropriate primitive data types (`int`, `float`, `char`, `double`) and format specifiers.
4. Apply arithmetic, relational, and conditional operators while avoiding integer truncation.

---

### Section A: Guided Tutorial Demonstrations (Solved Examples)

#### Example 1.1: Average of Three Numbers (Implicit vs. Explicit Type Casting)
* **Objective:** Understand how integer division causes truncation and how explicit casting preserves precision.

```c
#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    float average;

    printf("Enter three integer values (separated by space): ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Explicit cast prevents integer truncation: (int / int -> int)
    average = (float)(num1 + num2 + num3) / 3.0f;

    printf("Calculated Average: %.2f\n", average);
    return 0;
}
```
* **Sample Input:** `10 20 25`
* **Sample Output:** `Calculated Average: 18.33`

---

#### Example 1.2: Temperature Conversion (Formula Mapping & Floating Literals)
* **Objective:** Map mathematical expressions into C syntax: $F = (C \times \frac{9}{5}) + 32$.

```c
#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius (°C): ");
    if (scanf("%f", &celsius) != 1) {
        printf("Error: Invalid temperature input.\n");
        return 1;
    }

    // Using 9.0 / 5.0 ensures floating-point division
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    return 0;
}
```
* **Sample Input:** `37.0`
* **Sample Output:** `Temperature in Fahrenheit: 98.60°F`

---

### Section B: Practice Problems (Tutorial Lab Sheet)

*Solve all problems in the practical lab sessions.*

| Level | Problem No. | Title | Description | Concepts Tested |
| :--- | :--- | :--- | :--- | :--- |
| **Tier 1** | **P-01** | Student Profile Card | Print formatted student info (Name, Roll No, Branch, College) using escape sequences (`\n`, `\t`). | Basic `printf`, formatting |
| **Tier 1** | **P-02** | Arithmetic Suite | Input two integers and print their sum, difference, product, quotient, and remainder (`%`). Handle divisor $= 0$. | Basic operators, `scanf` |
| **Tier 1** | **P-03** | Rectangle Geometry | Read length and breadth from user; compute and display area and perimeter. | Sequential logic |
| **Tier 2** | **P-04** | Circle Metrics | Input radius as `float`. Compute Area ($A = \pi r^2$) and Perimeter ($P = 2 \pi r$). Use constant `#define PI 3.14159`. | Symbolic constants, precision |
| **Tier 2** | **P-05** | Variable Swapping | (a) Swap values of two variables using a temporary third variable.<br>(b) Swap two variables **without** using a third variable. | Memory, variable manipulation |
| **Tier 2** | **P-06** | Relational Thresholding | Input a number and compare it to a reference threshold (e.g., `100`). Output `1` if greater, `0` otherwise, **using relational operators only** (no `if` statements). | Relational expressions |
| **Tier 3** | **P-07** | Parity Checker | Determine if an integer is even or odd using the modulus operator `%`, and alternatively using bitwise `&`. | Modulus, bitwise logic |
| **Tier 3** | **P-08** | Time Conversion | Input a total number of seconds; convert and display it into `Hours : Minutes : Seconds`. | Integer division & modulus |

---

### Section C: Graded Assignment Instructions

> **Submission Policy:**
> 1. Select **any five (5) problems** from Section B (at least one must be from Tier 3).
> 2. For each problem, include:
>    * Problem Statement & Algorithm / Flowchart.
>    * Source code with comments explaining logic and variable choices.
>    * Screenshot or text copy of test runs with at least **two distinct test cases** (including edge cases).
> 3. Submit a hard copy before the due date.

---

### Section D: Self-Check & Viva Preparation Questions

1. Why does `printf("%d", 5 / 2);` print `2` instead of `2.5`?
2. What is the difference between `#define PI 3.14` and `const float PI = 3.14;`?
3. What does `scanf` return, and why is checking its return value considered best practice?
4. Explain the difference between `printf("%.2f", x);` and `printf("%6.2f", x);`.
5. Why does `scanf("%d", &number)` use `&`, while `scanf("%19s", name)` does not?
6. What is the difference between `&&` (logical AND) and `&` (bitwise AND)?
7. Why does `scanf(" %c", &ch)` have a space before `%c`?