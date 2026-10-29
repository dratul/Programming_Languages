# UNIT 02: Decision Making and Control Flow (C)

## 2.3 Functions

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

The following example shows that changing a parameter inside a function does not change the original variable:

```c
#include <stdio.h>

void try_to_change(int value)
{
value = 100;
printf("Inside function: %d\n", value);
}

int main(void)
{
int number = 5;

try_to_change(number);
printf("In main: %d\n", number);
return 0;
}
```

The function prints `100`, but `main` still prints `5` because `value` is a copy.

---
### Example: Find the Maximum of Three Numbers

```c
#include <stdio.h>

int find_max(int a, int b, int c);

int main(void) {
int a, b, c;

printf("Enter three integers: ");
if (scanf("%d %d %d", &a, &b, &c) != 3) {
    printf("Invalid input.\n");
    return 1;
}

printf("The maximum number is: %d\n", find_max(a, b, c));
return 0;
}

int find_max(int x, int y, int z)
{
if (x >= y && x >= z) {
    return x;
}
if (y >= x && y >= z) {
    return y;
}
return z;
}
```

### Example: Check Whether a Number Is Even

```c
#include <stdio.h>

int is_even(int number)
{
return number % 2 == 0;
}

int main(void)
{
int number;

printf("Enter an integer: ");
if (scanf("%d", &number) != 1) {
    printf("Invalid input.\n");
    return 1;
}

if (is_even(number)) {
    printf("%d is even.\n", number);
} else {
    printf("%d is odd.\n", number);
}

return 0;
}
```

### Example: Factorial Using a Function and a Loop

This example calculates the factorial of a non-negative integer from `0` to `20`. Larger values do not fit in the return type used here.

```c
#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
unsigned long long result = 1;

for (unsigned int i = 1; i <= n; i++) {
    result *= i;
}
return result;
}

int main(void)
{
int number;

printf("Enter an integer from 0 to 20: ");
if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
    printf("Please enter a whole number from 0 to 20.\n");
    return 1;
}

printf("%d! = %llu\n", number, factorial((unsigned int)number));
return 0;
}
```

## 2.4 Recursion

**Recursion** is a programming technique in which a function calls itself directly or indirectly to solve a subproblem of the same type.

### Essential Components
1. **Base Case (Termination Condition):** The simplest condition under which the function returns a value directly without further calls. Prevents infinite recursion and stack overflow.
2. **Recursive Step (General Case):** The step where the function calls itself with a reduced argument, moving closer to the base case.

---

### Example: Factorial Using Recursion ($n!$)

```text
0! = 1
n! = n * (n - 1)! for n >= 1
```

```c
#include <stdio.h>

unsigned long long factorial_recursive(unsigned int n)
{
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main(void)
{
    unsigned int number = 5;
    printf("Factorial of %u is: %llu\n", number, factorial_recursive(number));
    return 0;
}
```

Both the loop-based and recursive factorial methods return the same result. For a recursive function, the **base case** stops further calls; each recursive call must move closer to that case.

#### Call Stack Trace for `factorial_recursive(4)`
```
factorial_recursive(4) -> 4 * factorial_recursive(3)
factorial_recursive(3) -> 3 * factorial_recursive(2)
factorial_recursive(2) -> 2 * factorial_recursive(1)
factorial_recursive(1) -> returns 1 (base case)

Unwinding:
factorial_recursive(1) = 1
factorial_recursive(2) = 2 * 1 = 2
factorial_recursive(3) = 3 * 2 = 6
factorial_recursive(4) = 4 * 6 = 24
```

### Example: Fibonacci Using Recursion

The Fibonacci sequence starts with `0` and `1`. Each later value is the sum of the two previous values:

```text
F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n >= 2
```

```c
#include <stdio.h>

unsigned int fibonacci(unsigned int n)
{
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    for (unsigned int i = 0; i < 10; i++) {
        printf("%u ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
```

**Output:**

```text
0 1 1 2 3 5 8 13 21 34
```

This simple recursive version repeats some calculations, so it is suitable for learning recursion rather than for large values of `n`.

### Optional Example: Recursive Countdown

```c
#include <stdio.h>

void countdown(int n)
{
    if (n <= 0) {
        printf("Done!\n");
        return;
    }

    printf("%d\n", n);
    countdown(n - 1);
}

int main(void)
{
    countdown(3);
    return 0;
}
```

[Next unit: Advanced programming concepts](../unit_03/Unit_03_01_1D_Array.md)

## Practice Tutorials

1. Write a function to find the largest of three integers and call it from `main()`.

2. Write a recursive function to find the factorial of a non-negative integer and print the result.

---

[Back to syllabus](../README.md)