#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter the number of LED channels: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number % 2 == 0) {
        printf("%d LED channels is an even count.\n", number);
    } else {
        printf("%d LED channels is an odd count.\n", number);
    }

    return 0;
}
