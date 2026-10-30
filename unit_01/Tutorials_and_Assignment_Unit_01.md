## Tutorials and Assignment — Unit 01

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

#### Example 1.1: Average Visitors at Three Heritage Sites (Implicit vs. Explicit Type Casting)
* **Objective:** Understand how integer division causes truncation and how explicit casting preserves precision.

```c
#include <stdio.h>

int main(void) {
    int site1_visitors, site2_visitors, site3_visitors;
    float average;

    printf("Enter visitor counts for three Indian heritage sites: ");
    if (scanf("%d %d %d", &site1_visitors, &site2_visitors, &site3_visitors) != 3) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }

    // Explicit cast prevents integer truncation: (int / int -> int)
    average = (float)(site1_visitors + site2_visitors + site3_visitors) / 3.0f;

    printf("Average visitors per site: %.2f\n", average);
    return 0;
}
```
* **Sample Input:** `10 20 25`
* **Sample Output:** `Average visitors per site: 18.33`

---

#### Example 1.2: Temperature Conversion (Formula Mapping & Floating Literals)
* **Objective:** Map mathematical expressions into C syntax: $F = (C \times \frac{9}{5}) + 32$.

```c
#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Enter an Indian weather-station temperature in Celsius (°C): ");
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
| **Tier 1** | **P-01** | Community Volunteer Card | Print a volunteer's name, local event, and Indian city using escape sequences (`\n`, `\t`). | Basic `printf`, formatting |
| **Tier 1** | **P-02** | Arithmetic Suite | Input two integers and print their sum, difference, product, quotient, and remainder (`%`). Handle divisor $= 0$. | Basic operators, `scanf` |
| **Tier 1** | **P-03** | Solar Panel Dimensions | Read a small panel's length and breadth; compute and display its area and perimeter. | Sequential logic |
| **Tier 2** | **P-04** | Community Garden Bed | Input the radius of a circular garden bed; compute area and perimeter using `#define PI 3.14159`. | Symbolic constants, precision |
| **Tier 2** | **P-05** | Sensor Reading Swap | Swap two sensor readings, first with a temporary variable and then (optionally) without one. | Memory, variable manipulation |
| **Tier 2** | **P-06** | Rainwater Tank Threshold | Compare a rainwater tank reading with a chosen threshold; output `1` or `0` using relational operators only (no `if`). | Relational expressions |
| **Tier 3** | **P-07** | LED Channel Checker | Determine whether the number of active LED channels is even or odd using `%`; optionally compare with bitwise `&`. | Modulus; optional bitwise extension |
| **Tier 3** | **P-08** | Railway Display Timer | Convert a total number of seconds into `Hours : Minutes : Seconds` for a simple display timer. | Integer division & modulus |

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

## Related topics
- [Introduction to C](Unit_01_01_Introduction_to_C.md)
- [Program structure, input/output, and compilation](Unit_01_02_Program_Structure_and_Compilation.md)
- [Data types, variables, and constants](Unit_01_03_Data_Types_and_Variables.md)
- [Operators and expressions](Unit_01_04_Operators.md)
- [Type conversion](Unit_01_05_Type_Conversions.md)
- [Tutorials and assignment](Tutorials_and_Assignment_Unit_01.md)

---


[Back to syllabus](../README.md)
