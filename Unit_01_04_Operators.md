# Unit 1.4: Operators and Expressions

## 1.14 Operators in C

Operators are special symbols used to perform operations on variables and values (operands).

* **Arithmetic Operators:** Perform standard mathematical operations:
  `+` (Addition), `-` (Subtraction), `*` (Multiplication), `/` (Division), `%` (Modulus/Remainder)
* **Relational Operators:** Compare two values and evaluate to $1$ (true) or $0$ (false):
  `==` (Equal to), `!=` (Not equal to), `>` (Greater than), `<` (Less than), `>=` (Greater than or equal to), `<=` (Less than or equal to)
* **Logical Operators:** Combine multiple conditions:
  `&&` (Logical AND), `||` (Logical OR), `!` (Logical NOT)
* **Bitwise Operators:** Perform operations at the binary/bit level:
  `&` (Bitwise AND), `|` (Bitwise OR), `^` (Bitwise XOR), `~` (Bitwise NOT), `<<` (Left shift), `>>` (Right shift)
* **Assignment Operators:** Assign values to variables:
  `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `&=`, `|=`, `^=`, `<<=`, `>>=`
* **Increment & Decrement Operators:** Modify a numeric variable by 1:
  `++` (Increment: prefix `++a` or postfix `a++`), `--` (Decrement: prefix `--a` or postfix `a--`)
* **Conditional (Ternary) Operator:** Shorthand for simple if-else branching:
  `condition ? expression_if_true : expression_if_false;`
* **Special Operators:**
  * `sizeof`: Evaluates size in bytes.
  * `&`: Address-of operator.
  * `*`: Dereference / pointer operator.
  * `,`: Comma operator (evaluates expressions sequentially from left to right).
  * `->` and `.`: Member access operators for structs and unions.

For integer operands, `/` performs integer division and `%` gives the remainder; `%` is not used with floating-point operands. Relational and logical expressions evaluate to integer `1` for true or `0` for false. The bitwise operators work on integer representations and are different from the logical operators: for example, `&` is not the same as `&&`.

---

## 1.15 Operator Precedence & Associativity

| Precedence Group | Operators | Associativity |
| :--- | :--- | :--- |
| **1. Postfix** | `()`, `[]`, `->`, `.`, `++`, `--` | Left to Right |
| **2. Unary** | `+`, `-`, `!`, `~`, `++`, `--`, `(type)`, `*`, `&`, `sizeof` | Right to Left |
| **3. Multiplicative** | `*`, `/`, `%` | Left to Right |
| **4. Additive** | `+`, `-` | Left to Right |
| **5. Shift** | `<<`, `>>` | Left to Right |
| **6. Relational** | `<`, `<=`, `>`, `>=` | Left to Right |
| **7. Equality** | `==`, `!=` | Left to Right |
| **8. Bitwise AND** | `&` | Left to Right |
| **9. Bitwise XOR** | `^` | Left to Right |
| **10. Bitwise OR** | `|` | Left to Right |
| **11. Logical AND** | `&&` | Left to Right |
| **12. Logical OR** | `||` | Left to Right |
| **13. Conditional** | `?:` | Right to Left |
| **14. Assignment** | `=`, `+=`, `-=`, `*=`, `/=`, `%=`, etc. | Right to Left |
| **15. Comma** | `,` | Left to Right |

**Important:** Precedence determines how an expression is grouped, and associativity determines grouping when operators of the same precedence appear together. Neither one generally specifies the order in which operands are evaluated. Use parentheses to make expressions clear, and avoid changing the same variable more than once in an expression.

### Practice Code

```c
#include <stdio.h>

int main(void) {
    int a = 10, b = 3;

    // Arithmetic
    printf("a + b = %d\n", a + b);
    printf("a / b = %d (Integer division)\n", a / b);
    printf("a %% b = %d (Remainder)\n", a % b);

    // Relational & Logical
    int is_valid = (a > b) && (b != 0);
    printf("Logical Result: %d\n", is_valid);

    // Ternary Operator
    int max = (a > b) ? a : b;
    printf("Max value: %d\n", max);

    // Bitwise Operator
    printf("Bitwise AND (10 & 3): %d\n", a & b);

    return 0;
}
```

---


---

[Unit 1 overview](Unit_01_programming_basics_in_c.md) | [Tutorials and assignment](Tutorial_unit_01.md)
