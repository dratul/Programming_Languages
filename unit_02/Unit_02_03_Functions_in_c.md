# UNIT 02: Functions (C)

**Instructor:** [Dr Atul Kumar Dwivedi](https://www.linkedin.com/in/eratul/)  
**Institution:** BIET Jhansi

**Unit 02 topics:** [Control Statements](Unit_02_01_Control_Statements_in_c.md) | [Loops](Unit_02_02_Loops_in_c.md) | [Functions](Unit_02_03_Functions_in_c.md) | [Recursion](Unit_02_04_Recursion_in_c.md)

---

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
int addVolunteerCounts(int, int);

int main(void)
{
    int first_event_volunteers = 10, second_event_volunteers = 20;

    /* 2. FUNCTION CALL */
    int result = addVolunteerCounts(first_event_volunteers, second_event_volunteers);
    printf("Community event volunteers: %d\n", result);

    return 0;
}

/* 3. FUNCTION DEFINITION */
int addVolunteerCounts(int a, int b)
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
### Example: Find the Largest Visitor Group

```c
#include <stdio.h>

int find_max(int a, int b, int c);

int main(void) {
int a, b, c;

printf("Enter visitor counts for three Indian heritage sites: ");
if (scanf("%d %d %d", &a, &b, &c) != 3) {
    printf("Invalid input.\n");
    return 1;
}

printf("Largest visitor count: %d\n", find_max(a, b, c));
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

### Example: Check Whether an LED Channel Count Is Even

```c
#include <stdio.h>

int is_even(int number)
{
return number % 2 == 0;
}

int main(void)
{
int number;

printf("Enter the number of LED channels: ");
if (scanf("%d", &number) != 1) {
    printf("Invalid input.\n");
    return 1;
}

if (is_even(number)) {
    printf("%d LED channels is an even count.\n", number);
} else {
    printf("%d LED channels is an odd count.\n", number);
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

## Practice Tutorials

1. Write a function to find the largest of three visitor counts for local heritage sites and call it from `main()`.

---

## Related topics

- [Control Statements](Unit_02_01_Control_Statements_in_c.md)
- [Loops](Unit_02_02_Loops_in_c.md)
- [Functions](Unit_02_03_Functions_in_c.md)
- [Recursion](Unit_02_04_Recursion_in_c.md)

[Back to Unit 02 index](README.md) | [Back to syllabus](../README.md)
