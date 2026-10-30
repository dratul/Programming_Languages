# Unit 1.5: Type Conversion

## 1.5.1 Type Conversions

In C programming, every variable has a data type. Converting a value from one data type to another is called **type conversion** or **type casting**.

```c
int a = 10;
float b;
b = a; // 10 is converted to 10.0
```

There are two main types:
1. **Implicit Type Conversion** (Automatic)
2. **Explicit Type Conversion** (Type Casting)

---

### Implicit Type Conversion

Implicit conversion is performed automatically by the C compiler without special instructions.

#### Example: `int` to `float`

```c
// Type conversion in C
#include <stdio.h>

int main() {
    int a = 10;
    float b;
    b = a;

    printf("\n a = %d \n", a);
    printf("\n b = %.2f \n", b);
    return 0;
}
```
**Output:**
```
a = 10 
b = 10.00 
```
*Concept:*
$$25 \text{ (int)} \longrightarrow 25.0 \text{ (float)}$$
This conversion preserves the integer value when that value is representable by `float`. Large integers may be rounded because `float` has limited precision.

#### Conversion from `float` to `int` (Truncation)

```c
#include <stdio.h>

int main() {
    float x = 25.75;
    int y = x;

    printf("x = %.2f\n", x);
    printf("y = %d\n", y);
    return 0;
}
```
**Output:**
```
x = 25.75
y = 25
```
*Important:* This does not round $25.75$ to $26$. The fractional part is discarded.

#### Conversion Between `char` and `int`

In C, a `char` stores a character from the implementation's execution character set. ASCII is common, but C does not require the character set to be ASCII.

```c
#include <stdio.h>

int main() {
    char ch = 'A';
    int x = ch;

    printf("Character = %c\n", ch);
    printf("Integer value = %d\n", x);
    return 0;
}
```
**Output:**
```
Character = A
Integer value = 65
```

Similarly:
```c
int x = 66;
char ch = x;
printf("%c", ch); // Output: B
```

#### Arithmetic with Different Data Types

```c
int a = 10;
float b = 3.5;
float result = a + b;
```
*Concept:*
$$10 + 3.5 \longrightarrow 10.0 + 3.5 \longrightarrow 13.5$$
`result = 13.5`

#### Integer Division: A Common Beginner Mistake

```c
int a = 5;
int b = 2;
printf("%d", a / b); // Output: 2
```
Since both operands are integers, C performs integer division:
$$\frac{5}{2} = 2 \quad (\text{fractional part discarded})$$

**How to get 2.50:**
```c
int a = 5;
int b = 2;
float result = (float)a / b;
printf("%.2f", result); // Output: 2.50
```
`(float)a` converts `a` to `5.0`. The expression becomes $5.0 / 2 = 2.5$.

---

### Explicit Type Conversion (Type Casting)

When the programmer explicitly instructs C to convert a value:

```c
(data_type) expression
```

#### Example of Type Casting

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    float result;

    result = (float)a / b;
    printf("Result = %.2f\n", result);
    return 0;
}
```
**Output:**
```
Result = 3.33
```

#### Type Casting a Floating-Point Number to `int`

```c
#include <stdio.h>

int main() {
    float price = 99.99;
    int amount;

    amount = (int)price;
    printf("Price = %.2f\n", price);
    printf("Amount = %d\n", amount);
    return 0;
}
```
**Output:**
```
Price = 99.99
Amount = 99
```

---

### Common Conversion Hierarchy

The following is a simplified teaching diagram, not a complete conversion rule. In expressions, C first applies integer promotions where required and then the usual arithmetic conversions based on the operands' types:

```
char
  ↓
int
  ↓
long
  ↓
long long
  ↓
float
  ↓
double
  ↓
long double
```

For example, `int + double` produces a `double` result. Do not rely on this diagram alone to predict conversions involving all integer types and floating-point types; check the operand types and use an explicit cast when the intended conversion is not clear.

#### Example with `int` and `double`

```c
#include <stdio.h>

int main() {
    int a = 10;
    double b = 2.5;
    double result = a + b;

    printf("Result = %.2lf\n", result);
    return 0;
}
```
**Output:**
```
Result = 12.50
```

---

### Type Conversion During Assignment & Data Loss

```c
double x = 15.87;
int y = (int)x; // y becomes 15 (.87 is lost)
```
Converting from a type capable of representing more information to one capable of representing less can lead to precision loss or overflow.

---

### Type Conversion and User Input

Calculating the average visitor count for two heritage sites:

```c
#include <stdio.h>

int main() {
    int a, b;
    float average;

    printf("Enter visitor counts for two heritage sites: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    average = (float)(a + b) / 2;
    printf("Average visitors per site = %.2f\n", average);
    return 0;
}
```
If the user enters `5` and `6`:
```
Average visitors per site = 5.50
```

---

### Casting Before vs. After Division

* **Incorrect:**
  ```c
  float result = (float)(5 / 2);
  // (5 / 2) evaluates to 2 first; (float)2 = 2.0
  ```
* **Correct:**
  ```c
  float result = (float)5 / 2;
  // 5.0 / 2 evaluates to 2.5
  ```

---

### Percentage Calculation Example

```c
#include <stdio.h>

int main() {
    int obtained = 450;
    int total = 500;
    float percentage;

    percentage = (float)obtained / total * 100;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
```
**Output:**
```
Percentage = 90.00%
```

---

### Implicit vs. Explicit Conversion Summary

| Feature | Implicit Conversion | Explicit Conversion |
| :--- | :--- | :--- |
| **Performed by** | Compiler | Programmer |
| **Also called** | Automatic conversion | Type casting |
| **Syntax required** | No | Yes |
| **Example** | `float x = 10;` | `float x = (float)10;` |
| **Control** | Less | More |

---

### Common Beginner Mistakes

1. **Expecting decimal output from integer division:**
   ```c
   int a = 5, b = 2;
   float result = a / b; // Evaluates to 2.00, NOT 2.50
   // Correct: float result = (float)a / b;
   ```
2. **Casting too late:**
   ```c
   float result = (float)(a / b); // Division truncates before casting!
   // Correct: float result = (float)a / b;
   ```
3. **Assuming casting rounds:**
   ```c
   int x = (int)9.99; // Results in 9, NOT 10
   ```
4. **Ignoring data loss:**
   ```c
   int x = (int)123.456; // Truncates decimal digits
   ```

---

### Type Conversion vs. Type Casting

* **Type Conversion:** A general term for changing a value from one type to another (can be implicit or explicit).
* **Type Casting:** An explicit operation where the programmer specifies the conversion syntax `(type)value`.
---

[Tutorials and assignment](tutorials/Tutorials_and_Assignment_Unit_01.md)

[Next unit: Decision making and control flow](../unit_02/Unit_02_01_LOOPs_in_c.md)

## Practice Tutorials

1. Use integer division and explicit casting to calculate the average daily visitor count at a local heritage site.

2. Convert a phone sensor reading from an integer scale to a decimal voltage value and print two digits after the decimal point.

---

## Related topics
- [Introduction to C](Unit_01_01_Introduction_to_C.md)
- [Program structure, input/output, and compilation](Unit_01_02_Program_Structure_and_Compilation.md)
- [Data types, variables, and constants](Unit_01_03_Data_Types_and_Variables.md)
- [Operators and expressions](Unit_01_04_Operators.md)
- [Type conversion](Unit_01_05_Type_Conversions.md)
- [Tutorials and assignment](tutorials/Tutorials_and_Assignment_Unit_01.md)

---


[Back to syllabus](../README.md)
