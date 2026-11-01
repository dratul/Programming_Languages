# UNIT 02: Control Statements (C)

**Instructor:** [Dr Atul Kumar Dwivedi](https://www.linkedin.com/in/eratul/)  
**Institution:** BIET Jhansi

**Unit 02 topics:** [Control Statements](Unit_02_01_Control_Statements_in_c.md) | [Loops](Unit_02_02_Loops_in_c.md) | [Functions](Unit_02_03_Functions_in_c.md) | [Recursion](Unit_02_04_Recursion_in_c.md)

---

## 2.1 Control Statements

### Control Statements Hierarchy

```
Control Statements
├── Selection Statements
│   ├── if
│   ├── if-else
│   └── switch
├── Iteration Statements
│   ├── for
│   ├── while
│   └── do-while
└── Jumping Statements
    ├── break
    ├── continue
    └── goto
```

---

A C program normally executes statements sequentially from top to bottom, one after another.

```c
#include <stdio.h>

int main(void)
{
    printf("First\n");
    printf("Second\n");
    printf("Third\n");
    return 0;
}
```

**Output:**
```
First
Second
Third
```

However, real programs often need to:
* Make decisions.
* Execute specific statements only when a condition is met.
* Repeat a set of statements several times.
* Skip a particular iteration.
* Terminate a loop early.
* Choose one option from several alternatives.

For these purposes, C provides **control statements**.

---

### Types of Control Statements

Before learning decision-making statements, we must understand conditions. A **condition** is an expression that evaluates to either **True** (non-zero) or **False** ($0$).

For example:
* Expression: $\text{age} \ge 18$
  * If $\text{age} = 20 \implies \text{True}$
  * If $\text{age} = 15 \implies \text{False}$

In C, conditions are formulated using relational and logical operators.

> **Caution:** Do not confuse the assignment operator (`=`) with the equality comparison operator (`==`).
> * `x = 10;` assigns the value $10$ to variable `x`.
> * `x == 10;` compares the value of `x` with $10$.

C control statements are broadly classified into three categories:
1. **Selection Statements**
2. **Iteration Statements**
3. **Jumping Statements**

---

### The `if` Statement

The simplest decision-making construct in C. The block executes only if the specified condition evaluates to true.

#### Syntax
```c
if (condition)
{
    statement;
}
```

#### Example tutorial: Community Volunteer Age Check
```c
#include <stdio.h>

int main(void)
{
    int age = 20;

    if (age >= 18)
    {
        printf("Meets the 18+ volunteer age check.\n");
    }

    return 0;
}
```

**Output:**
```
Meets the 18+ volunteer age check.
```

The condition $\text{age} \ge 18$ is true because $\text{age} = 20$.

---

### The `if-else` Statement

Executes one block of code when the condition is true, and an alternate block when it evaluates to false.

#### Syntax
```c
if (condition)
{
    statement1;
}
else
{
    statement2;
}
```

#### Example tutorial: Community Volunteer Age Check
```c
#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid age.\n");
        return 1;
    }

    if (age >= 18)
    {
        printf("Meets the 18+ volunteer age check.\n");
    }
    else
    {
        printf("Does not meet the 18+ volunteer age check.\n");
    }

    return 0;
}
```

**Input:**
```
16
```
**Output:**
```
Does not meet the 18+ volunteer age check.
```

---

#### example Tutorial: Checking an LED Channel Count
An LED channel count is even if it is divisible by $2$ with a remainder of zero (using the modulus operator `%`).

```c
#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter the number of LED channels: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid integer.\n");
        return 1;
    }

    if (number % 2 == 0)
    {
        printf("Even number of LED channels\n");
    }
    else
    {
        printf("Odd number of LED channels\n");
    }

    return 0;
}
```

**Input:**
```
25
```
**Output:**
```
Odd number of LED channels
```

#### Practice Programs
1. Write a program to check whether a number is positive, negative, or zero.
2. A user enters a number between $1$ and $100$. Check whether the number falls within the range $[30, 50]$.

---

### The `else-if` Ladder

Used when there are more than two mutually exclusive branches or possibilities.

#### Syntax
```c
if (condition1)
{
    statement;
}
else if (condition2)
{
    statement;
}
else if (condition3)
{
    statement;
}
else
{
    statement;
}
```

#### Example tutorial: Phone Battery Status
* $90 - 100 \implies \text{Full}$
* $70 - 89 \implies \text{Good}$
* $40 - 69 \implies \text{Moderate}$
* $20 - 39 \implies \text{Low}$
* $\text{Below } 20 \implies \text{Very low}$

```c
#include <stdio.h>

int main(void)
{
    int battery_percent;

    printf("Enter phone battery percentage from 0 to 100: ");
    if (scanf("%d", &battery_percent) != 1 || battery_percent < 0 || battery_percent > 100) {
        printf("Invalid battery percentage.\n");
        return 1;
    }

    if (battery_percent >= 90)
    {
        printf("Battery level: Full\n");
    }
    else if (battery_percent >= 70)
    {
        printf("Battery level: Good\n");
    }
    else if (battery_percent >= 40)
    {
        printf("Battery level: Moderate\n");
    }
    else if (battery_percent >= 20)
    {
        printf("Battery level: Low\n");
    }
    else
    {
        printf("Battery level: Very low\n");
    }

    return 0;
}
```

**Input:**
```
75
```
**Output:**
```
Battery level: Good
```

#### Evaluation Mechanism
Conditions are evaluated from top to bottom. Once any condition evaluates to true, the associated statement block executes, and the rest of the ladder is bypassed entirely.

---

### Nested `if` Statements

An `if` statement enclosed inside another `if` block is called a **nested if**.

```c
#include <stdio.h>

int main(void)
{
    int age;
    int orientation_complete;

    printf("Enter age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid age.\n");
        return 1;
    }
    printf("Have you completed event orientation? Enter 1 for Yes, 0 for No: ");
    if (scanf("%d", &orientation_complete) != 1 ||
        (orientation_complete != 0 && orientation_complete != 1)) {
        printf("Enter 1 for Yes or 0 for No.\n");
        return 1;
    }

    if (age >= 18)
    {
        if (orientation_complete == 1)
        {
            printf("Ready to volunteer at the community event.\n");
        }
    }

    return 0;
}
```

#### Simplification Using Logical Operators
Nested conditions can often be flattened into a single statement using logical operators:

```c
if (age >= 18 && orientation_complete == 1)
{
    printf("Ready to volunteer at the community event.\n");
}
```

---

### Logical Operators

| Operator | Meaning | Example |
| :---: | :---: | :---: |
| `&&` | Logical AND | `a > 0 && b > 0` (Both must be true) |
| `\|\|` | Logical OR | `a > 0 \|\| b > 0` (At least one must be true) |
| `!` | Logical NOT | `!(a > 0)` (Inverts truth value) |

* **Logical AND (`&&`):**
  ```c
  if (age >= 18 && age <= 60)
  {
      printf("Age is between 18 and 60.\n");
  }
  ```

* **Logical OR (`||`):**
  ```c
  // Recognize a well-attended local heritage event
  if (site_visitors >= 1000 || heritage_day == 1)
  {
      printf("Community event recognized.\n");
  }
  ```

* **Logical NOT (`!`):**
  ```c
  if (!(age >= 18))
  {
      printf("Not an adult.\n");
  }
  ```

---

### The `switch` Statement

The `switch` statement tests the value of a variable or expression against a series of integer or character constant cases.

#### Syntax
```c
switch (expression)
{
    case value1:
        statements;
        break;
    case value2:
        statements;
        break;
    default:
        statements;
}
```

#### Example
```c
#include <stdio.h>

int main(void)
{
    int choice;

    printf("Choose an Indian heritage site: 1) Jhansi Fort 2) Sanchi Stupa 3) Konark Sun Temple: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
            printf("Jhansi Fort selected\n");
            break;
        case 2:
            printf("Sanchi Stupa selected\n");
            break;
        case 3:
            printf("Konark Sun Temple selected\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
```

#### Role of `break` and Fall-Through
Without a `break;` statement, execution falls through to subsequent case blocks regardless of whether their constants match. `break` exits the switch structure immediately.

#### The `default` Label
The `default` case executes if none of the explicit `case` values match the expression.

---

### Comparison: `if-else` vs `switch`

| Feature | `if-else` | `switch` |
| --- | --- | --- |
| **Condition Types** | Evaluates logical expressions, inequalities ($<, >$), ranges | Tests exact discrete integer or character constants |
| **Flexibility** | Supports compound conditions (`&&`, `\|\|`) | Tests a single expression against distinct case labels |
| **Readability** | Can become messy with numerous branches | Clean and structured for multi-way branches/menus |
| **Best suited to** | Conditions, ranges, and compound tests | Matching one expression against discrete constant values |

---

## Why this unit matters

* Decision-making and loops are used in real systems such as traffic lights, menus, and automated control logic.
* Functions help developers write cleaner, reusable, and easier-to-debug programs.
* Recursion introduces the idea of solving a problem by breaking it into smaller subproblems, a key concept in computer science.

## AKTU Previous-Year Practice Questions

1. Write a C program using `if-else` to check whether a number is positive, negative, or zero.

---

## Related topics

- [Control Statements](Unit_02_01_Control_Statements_in_c.md)
- [Loops](Unit_02_02_Loops_in_c.md)
- [Functions](Unit_02_03_Functions_in_c.md)
- [Recursion](Unit_02_04_Recursion_in_c.md)

[Back to Unit 02 index](README.md) | [Back to syllabus](../README.md)
