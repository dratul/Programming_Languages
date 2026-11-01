# UNIT 02: Recursion (C)

**Instructor:** [Dr Atul Kumar Dwivedi](https://www.linkedin.com/in/eratul/)  
**Institution:** BIET Jhansi

**Unit 02 topics:** [Control Statements](Unit_02_01_Control_Statements_in_c.md) | [Loops](Unit_02_02_Loops_in_c.md) | [Functions](Unit_02_03_Functions_in_c.md) | [Recursion](Unit_02_04_Recursion_in_c.md)

---

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

## Practice Tutorials

1. Write a recursive function to find the factorial of a non-negative integer and print the result.

## AKTU Previous-Year Practice Questions

1. Write a recursive C function to calculate the factorial of a number and explain the base case.

---

## Related topics

- [Control Statements](Unit_02_01_Control_Statements_in_c.md)
- [Loops](Unit_02_02_Loops_in_c.md)
- [Functions](Unit_02_03_Functions_in_c.md)
- [Recursion](Unit_02_04_Recursion_in_c.md)

[Back to Unit 02 index](README.md) | [Back to syllabus](../README.md)

[Next unit: Advanced programming concepts](../unit_03/Unit_03_01_1D_Array.md)
