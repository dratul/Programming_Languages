# UNIT 02: Decision Making and Control Flow (C)

## Syllabus

* **Decision Making and Control Flow (C):**
  1. Control Statements
  2. Loops: `for`, `while`, `do-while`; `break` and `continue`
  3. Functions: definition, call, return; call by value
  4. Recursion: factorial and Fibonacci (simple examples only)
* **Real connect:** Control flow is the brain of every program—from traffic signal logic to drone autopilot decision-making.

---

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

## 2.1 Control Statements

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

## 2.2 Types of Control Statements

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

#### Example: Voting Eligibility Check
```c
#include <stdio.h>

int main(void)
{
    int age = 20;

    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }

    return 0;
}
```

**Output:**
```
You are eligible to vote.
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

#### Example
```c
#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Eligible to vote.\n");
    }
    else
    {
        printf("Not eligible to vote.\n");
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
Not eligible to vote.
```

---

#### Tutorial: Checking Even or Odd
A number is even if it is divisible by $2$ with a remainder of zero (using the modulus operator `%`).

```c
#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
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
Odd number
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

#### Example: Grading System
* $90 - 100 \implies \text{Grade A}$
* $80 - 89 \implies \text{Grade B}$
* $70 - 79 \implies \text{Grade C}$
* $60 - 69 \implies \text{Grade D}$
* $\text{Below } 60 \implies \text{Grade F}$

```c
#include <stdio.h>

int main(void)
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade C\n");
    }
    else if (marks >= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}
```

**Input:**
```
85
```
**Output:**
```
Grade B
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
    int citizen;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Are you a citizen? Enter 1 for Yes, 0 for No: ");
    scanf("%d", &citizen);

    if (age >= 18)
    {
        if (citizen == 1)
        {
            printf("Eligible to vote.\n");
        }
    }

    return 0;
}
```

#### Simplification Using Logical Operators
Nested conditions can often be flattened into a single statement using logical operators:

```c
if (age >= 18 && citizen == 1)
{
    printf("Eligible to vote.\n");
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
  // Special recognition eligibility
  if (marks >= 90 || sports == 1)
  {
      printf("Special recognition.\n");
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

    printf("Enter a number from 1 to 3: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You selected One\n");
            break;
        case 2:
            printf("You selected Two\n");
            break;
        case 3:
            printf("You selected Three\n");
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
| **Speed** | Evaluates sequentially ($O(n)$) | Often optimized into jump tables by compilers ($O(1)$) |

---

## 2.3 Iteration Statements (Loops)

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

#### Example: Counting from $1$ to $5$
```c
#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
```

#### Components
1. **Initialization (`i = 1`):** Evaluated once prior to entering the loop.
2. **Condition (`i <= 5`):** Checked before every iteration. If false, the loop terminates.
3. **Update (`i++`):** Executed after each iteration.

#### Example: Printing Even Numbers
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

#### Example
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

#### Example
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
Skips the remainder of the current iteration and jumps to the update step of the loop.

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

### Nested Loops

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
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```
**Output:**
```
* * * 
* * * 
* * * 
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

#### 1. Arithmetic Menu Driven Program
```c
#include <stdio.h>

int main(void)
{
    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

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

#### 2. Password Attempts Counter
```c
#include <stdio.h>

int main(void)
{
    int password;
    int attempts;

    for (attempts = 1; attempts <= 3; attempts++)
    {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 1234)
        {
            printf("Login successful.\n");
            break;
        }
        else
        {
            printf("Incorrect password.\n");
        }
    }
    return 0;
}
```

---

## 2.4 Functions

A **function** is an independent block of modular code designed to perform a distinct, well-defined task.

* **Modularity:** Divides large programs into manageable units.
* **Code Reusability:** Logic can be executed repeatedly across multiple calls.
* **Easy Debugging:** Localizes testing and isolates bugs.

### The Three Elements of a Function

1. **Declaration (Prototype):** Informs the compiler about the function name, parameter types, and return type.
2. **Call:** Transfers execution control to the function body.
3. **Definition:** Contains the actual implementation and code block.

```c
#include <stdio.h>

/* 1. FUNCTION DECLARATION */
int addNumbers(int, int);

int main(void)
{
    int num1 = 10, num2 = 20;

    /* 2. FUNCTION CALL */
    int result = addNumbers(num1, num2);
    printf("Sum: %d\n", result);

    return 0;
}

/* 3. FUNCTION DEFINITION */
int addNumbers(int a, int b)
{
    int sum = a + b;
    return sum; // Returns result to caller
}
```

### Categories of Functions

| Category | Return Value? | Parameters? | Example Use Case |
| --- | :---: | :---: | --- |
| **1. No args, no return** | No (`void`) | No (`void`) | Printing a banner or title |
| **2. With args, no return** | No (`void`) | Yes | Printing data passed to it |
| **3. No args, with return** | Yes | No (`void`) | Generating a random number |
| **4. With args, with return** | Yes | Yes | Mathematical evaluations (`pow`, `sum`) |

### Actual vs Formal Arguments & Call by Value

* **Actual Arguments:** Values or variables supplied at the function call: `add(x, y)`.
* **Formal Arguments:** Variables defined in the function prototype/header: `int add(int a, int b)`.
* **Call by Value:** In standard C, parameters receive *copies* of actual parameters. Changes made to formal parameters within the function do not affect the original arguments in the caller.

---

## 2.5 Recursion

**Recursion** is a programming technique in which a function calls itself directly or indirectly to solve a subproblem of the same type.

### Essential Components
1. **Base Case (Termination Condition):** The simplest condition under which the function returns a value directly without further calls. Prevents infinite recursion and stack overflow.
2. **Recursive Step (General Case):** The step where the function calls itself with a reduced argument, moving closer to the base case.

---

### Example 1: Factorial Calculation ($n!$)

$$\begin{aligned}
0! &= 1 \\
n! &= n \times (n-1)! \quad \text{for } n \ge 1
\end{aligned}$$

```c
#include <stdio.h>

long long factorial(int n)
{
    // 1. Base Case
    if (n <= 1)
    {
        return 1;
    }
    // 2. Recursive Step
    return n * factorial(n - 1);
}

int main(void)
{
    int num = 5;
    printf("Factorial of %d is: %lld\n", num, factorial(num));
    return 0;
}
```

#### Call Stack Trace for `factorial(4)`
```
factorial(4) -> 4 * factorial(3)
factorial(3) -> 3 * factorial(2)
factorial(2) -> 2 * factorial(1)
factorial(1) -> returns 1 (Base case reached)

Unwinding:
factorial(1) = 1
factorial(2) = 2 * 1 = 2
factorial(3) = 3 * 2 = 6
factorial(4) = 4 * 6 = 24
```

---

### Example 2: Recursive Countdown
```c
#include <stdio.h>

void countdown(int n)
{
    // 1. Base Case
    if (n == 0)
    {
        printf("Counting over!\n");
        return;
    }

    // 2. Work
    printf("%d... ", n);

    // 3. Recursive Step
    countdown(n - 1);
}
```

---

### Example 3: Power Calculation ($\text{base}^{\text{exp}}$)

$$\text{base}^{\text{exp}} = \text{base} \times \text{base}^{(\text{exp}-1)}, \quad \text{where } \text{base}^0 = 1$$

```c
#include <stdio.h>

int power(int base, int exp)
{
    // 1. Base Case
    if (exp == 0)
    {
        return 1;
    }

    // 2. Recursive Step
    return base * power(base, exp - 1);
}

int main(void)
{
    int b = 3, e = 3;
    printf("%d raised to the power of %d is: %d\n", b, e, power(b, e));
    return 0;
}
```

**Output:**
```
3 raised to the power of 3 is: 27
```