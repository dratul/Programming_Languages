#include <stdio.h>
int add(int a, int b);
#include "my_functions.c" // Includes the declaration

int main() {
    int result = add(5, 3); // Function call
    printf("The result is: %d\n", result);
    return 0;
}