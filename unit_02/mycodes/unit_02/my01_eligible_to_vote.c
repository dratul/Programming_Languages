// Eligible to vote
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid age.\n");
        return 1;
    }

    if (age >= 18) {
        printf("Eligible to vote.");
    } else {
        printf("Not eligible to vote.");
    }

    return 0;
}
