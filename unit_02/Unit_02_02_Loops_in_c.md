# UNIT 02: Loops (C)

**Instructor:** [Dr Atul Kumar Dwivedi](https://www.linkedin.com/in/eratul/)  
**Institution:** BIET Jhansi

**Unit 02 topics:** [Control Statements](Unit_02_01_Control_Statements_in_c.md) | [Loops](Unit_02_02_Loops_in_c.md) | [Functions](Unit_02_03_Functions_in_c.md) | [Recursion](Unit_02_04_Recursion_in_c.md)

---

## 2.2 Iteration Statements (Loops)

Loops repeat a block of code until a terminating condition is met.

### 1. The `for` Loop
Ideal when the number of iterations is known beforehand.

#### Syntax
```c
for (initialization; condition; update)
{
    statements;
}
```

#### Example: Numbering Heritage Walk Checkpoints
```c
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("Checkpoint %d\n", i);
    }
    return 0;
}
```

#### Components
1. **Initialization (`i = 1`):** Evaluated once prior to entering the loop.
2. **Condition (`i <= 5`):** Checked before every iteration. If false, the loop terminates.
3. **Update (`i++`):** Executed after each iteration.

#### Example: Printing Even LED Channel Numbers
```c
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 2; i <= 10; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```
**Output:** `2 4 6 8 10`

---

### 2. The `while` Loop
An entry-controlled loop that repeats code as long as its condition remains true.

#### Syntax
```c
while (condition)
{
    statements;
}
```

#### Example: Numbering Community Event Groups
```c
#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```

> **Note:** If the condition evaluates to false at the start, the loop body executes zero times.

---

### 3. The `do-while` Loop
An exit-controlled loop that tests the condition **after** executing the body, guaranteeing at least one execution.

#### Syntax
```c
do
{
    statements;
} while (condition);
```
*(Notice the trailing semicolon after `while (condition);`)*

#### Example: Issuing Heritage Walk Tokens
```c
#include <stdio.h>

int main(void)
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
```

---

### Comparison: `for` vs `while` vs `do-while`

| Feature | `for` | `while` | `do-while` |
| --- | --- | --- | --- |
| **Condition Check** | Before execution (Entry) | Before execution (Entry) | After execution (Exit) |
| **Minimum Runs** | $0$ | $0$ | $1$ |
| **Best Used For** | Predetermined iteration counts | Indefinite loops dependent on events | Interactive menus, input validation |
| **Initialization** | Within loop header | Preceding the loop | Preceding the loop |
| **Update Step** | Within loop header | Inside the loop block | Inside the loop block |

---

### Jumping Statements

#### The `break` Statement
Instantly exits the enclosing loop or switch construct.

```c
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}
```
**Output:** `1 2 3 4`

#### The `continue` Statement
Skips the remainder of the current iteration and jumps to the update step of the loop. This example skips a reserved LED channel number.

```c
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
```
**Output:** `1 2 4 5`

---

### Nested Loops: Community Hall Seating Rows

A loop placed inside another loop.

```c
#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("O ");
        }
        printf("\n");
    }
    return 0;
}
```
**Output:**
```
O O O 
O O O 
O O O 
```

---

### The `goto` Statement

Transfers control unconditionally to a labeled statement. Its use is generally discouraged because it creates unstructured, difficult-to-maintain code ("spaghetti code").

```c
#include <stdio.h>

int main(void)
{
    int i = 1;
start:
    printf("%d ", i);
    i++;
    if (i <= 5)
    {
        goto start;
    }
    return 0;
}
```

---

### Comprehensive Program Examples

#### 1. Solar Sensor Reading Calculator
```c
#include <stdio.h>

int main(void)
{
    int choice;
    float a, b;

    printf("Enter two solar-panel sensor readings: ");
    if (scanf("%f %f", &a, &b) != 2) {
        printf("Invalid numbers.\n");
        return 1;
    }

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
            {
                printf("Result = %.2f\n", a / b);
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
```

#### 2. Community Heritage Quiz Attempts
```c
#include <stdio.h>

int main(void)
{
    int answer;
    int attempts;

    for (attempts = 1; attempts <= 3; attempts++)
    {
        printf("In which year did India become a republic? ");
        if (scanf("%d", &answer) != 1) {
            printf("Invalid year input.\n");
            return 1;
        }

        if (answer == 1950)
        {
            printf("Correct!\n");
            break;
        }
        else
        {
            printf("Try again.\n");
        }
    }
    return 0;
}
```

## Practice Tutorials

1. Write a program to print the multiplication table for the number of LED channels in a small device using a `for` loop.

2. Use a `while` loop to total visitor counts collected at a local heritage site.

## AKTU Previous-Year Practice Questions

1. Explain the difference between `for`, `while`, and `do-while` loops with suitable examples.

---

## Related topics

- [Control Statements](Unit_02_01_Control_Statements_in_c.md)
- [Loops](Unit_02_02_Loops_in_c.md)
- [Functions](Unit_02_03_Functions_in_c.md)
- [Recursion](Unit_02_04_Recursion_in_c.md)

[Back to Unit 02 index](README.md) | [Back to syllabus](../README.md)
