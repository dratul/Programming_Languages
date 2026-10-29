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