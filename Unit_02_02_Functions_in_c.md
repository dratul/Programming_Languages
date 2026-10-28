# UNIT 02: Decision Making and Control Flow (C)

## 2.2 Functions

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
#### Tutorial 02_02_01: Write a function to calculate maximum of three numbers using a separate function in c
```c
#include <stdio.h>
int find_max(int a, int b, int c); // Declaration of function

int main() {
    int a, b, c ,answer;
    printf("enter three number: ");
    scanf("%d %d %d" ,&a ,&b ,&c);
    answer = find_max(a,b,c);   // Function call 
    printf("the maximum number is: %d\n" , answer);
        return 0;
}
int find_max(int x, int y, int z)   // Function Prototype
{

    if (x>=y && x>=z){
        return x;
    }
    if (y>=x && y>=z) {
        return y;
    }
    else 
        return z;
}
```

#### Tutorial 02_02_02: Write the main function for the user defined function given below to check if number is even in c
```c
#include <stdio.h> 
/** * Checks if a number is even. 
* @param n The integer to check. 
* @return 1 if the number is even, 0 if it is odd. 
*/ int isEven(int n) 
{ 
// The modulo operator (%) returns the remainder of division by 2. // If the remainder is 0, the number is even. 
if (n % 2 == 0) 
{
 return 1; 
} else 
{ 
return 0; 
}
```

#### Tutorial 02_02_03: Write the user defined function for calculation of factorial of a number in c
```c
#include <stdio.h>

int main() {
int n, i;
int fact = 1; 

printf("Enter an integer: ");
scanf("%d", &n);

if (n < 0)
printf("Error! Factorial of a negative number doesn't exist.");
else {
for (i = 1; i <= n; ++i) {
fact *= i;
}
printf("Factorial of %d = %llu", n, fact);
}

return 0;
}
```



## 2.5 Recursion

**Recursion** is a programming technique in which a function calls itself directly or indirectly to solve a subproblem of the same type.

### Essential Components
1. **Base Case (Termination Condition):** The simplest condition under which the function returns a value directly without further calls. Prevents infinite recursion and stack overflow.
2. **Recursive Step (General Case):** The step where the function calls itself with a reduced argument, moving closer to the base case.

---

### Tutorial 02_02_04: Factorial Calculation ($$n!$$)

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

### Tutorial 02_02_05: Recursive Countdown : Write a recursive function to countdown from a number n to zero
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