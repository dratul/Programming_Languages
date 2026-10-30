// A simple civic volunteer age check
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
        printf("Meets the 18+ volunteer age check.");
    } else {
        printf("Does not meet the 18+ volunteer age check.");
    }

    return 0;
}
