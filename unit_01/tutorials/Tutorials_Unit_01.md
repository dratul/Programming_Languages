# Unit 01 Tutorials and Assignment
## Basics of C

Each topic below includes at least two tutorial examples so students can practice the concept from different angles.

The final column uses NBA Bloom's Taxonomy levels and action keywords to identify the thinking skill practiced.

### 1. Program structure and input/output
| S. N. | Tutorial Problems | Bloom's Level — Action Keyword |
| --- | --- | --- |
| 1. | Write a program using C to print your name, branch, and an Indian city or community tradition you value. | Apply — Implement |
| 2. | Write a program using C to add two counts from a local community event. | Apply — Calculate |

### 2. Data types and variables
| S. N. | Tutorial Problems | Bloom's Level — Action Keyword |
| --- | --- | --- |
| 3. | Write a program using C to find the area of a small solar panel from its length and breadth. | Apply — Calculate |
| 4. | Write a program using C to calculate the area of a circular community garden bed. | Apply — Calculate |

### 3. Operators and expressions
| S. N. | Tutorial Problems | Bloom's Level — Action Keyword |
| --- | --- | --- |
| 5. | Write a program using C to swap two sensor readings using a temporary variable. | Apply — Demonstrate |
| 6. | Write a program using C to input visitor counts for three local heritage sites and display their total and average. | Apply — Calculate |

### 4. Type conversion and expressions
| S. N. | Tutorial Problems | Bloom's Level — Action Keyword |
| --- | --- | --- |
| 7. | Use visitor counts to demonstrate integer division and explain how explicit casting changes the average. | Analyze — Compare |
| 8. | Write a program using C to convert a weather-station temperature from Celsius to Fahrenheit and print two decimal places. | Apply — Convert |

### Guided tutorial demonstrations

#### Example 1: Average Visitors at Three Heritage Sites (Implicit vs. Explicit Type Casting)

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

    average = (float)(site1_visitors + site2_visitors + site3_visitors) / 3.0f;

    printf("Average visitors per site: %.2f\n", average);
    return 0;
}
```

* **Sample input:** `10 20 25`
* **Sample output:** `Average visitors per site: 18.33`

#### Example 2: Temperature Conversion (Formula Mapping and Floating Literals)

* **Objective:** Map the mathematical expression $F = (C \times \frac{9}{5}) + 32$ into C syntax.

```c
#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Enter an Indian weather-station temperature in Celsius: ");
    if (scanf("%f", &celsius) != 1) {
        printf("Error: Invalid temperature input.\n");
        return 1;
    }

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
```

* **Sample input:** `37.0`
* **Sample output:** `Temperature in Fahrenheit: 98.60`

### Practice problems (Tutorial Lab Sheet)

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

### Graded assignment instructions

> **Submission Policy:**
> 1. Select **any five (5) problems** from the practice problems above (at least one must be from Tier 3).
> 2. For each problem, include:
>    * Problem statement and algorithm / flowchart.
>    * Source code with comments explaining logic and variable choices.
>    * Screenshot or text copy of test runs with at least **two distinct test cases** (including edge cases).
> 3. Submit a hard copy before the due date.

### Self-check and viva preparation questions

1. Why does `printf("%d", 5 / 2);` print `2` instead of `2.5`?
2. What is the difference between `#define PI 3.14` and `const float PI = 3.14;`?
3. What does `scanf` return, and why is checking its return value considered best practice?
4. Explain the difference between `printf("%.2f", x);` and `printf("%6.2f", x);`.
5. Why does `scanf("%d", &number)` use `&`, while `scanf("%19s", name)` does not?
6. What is the difference between `&&` (logical AND) and `&` (bitwise AND)?
7. Why does `scanf(" %c", &ch)` have a space before `%c`?

[Related topics](../Unit_01_01_Introduction_to_C.md):
[Program structure and compilation](../Unit_01_02_Program_Structure_and_Compilation.md) ·
[Data types and variables](../Unit_01_03_Data_Types_and_Variables.md) ·
[Operators](../Unit_01_04_Operators.md) ·
[Type conversions](../Unit_01_05_Type_Conversions.md)

[Back to syllabus](../../README.md) | [Next tutorial: Unit 02](../../unit_02/tutorials/Tutorials_Unit_02.md)
