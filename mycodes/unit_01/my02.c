#include <stdio.h>

int main(void) 
{
    double a, A, sum;

    //  for user input 1
    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &A);

    // Calculate sum
    sum = a + A;

    // Display result
    printf("The sum of %lf and %lf is: %lf\n", a, A, sum);

    return 0;
}