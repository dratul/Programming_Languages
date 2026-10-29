#include <stdio.h>

int main(void) 
{
    double first_number, second_number, sum;

    printf("Enter first number: ");
    if (scanf("%lf", &first_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &second_number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate sum
    sum = first_number + second_number;

    // Display result
    printf("The sum of %.2f and %.2f is: %.2f\n", first_number, second_number, sum);

    return 0;
}