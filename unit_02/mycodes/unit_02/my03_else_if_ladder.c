#include <stdio.h>

int main(void)
{
    int battery_percent;

    printf("Enter phone battery percentage from 0 to 100: ");
    if (scanf("%d", &battery_percent) != 1 || battery_percent < 0 || battery_percent > 100) {
        printf("Invalid battery percentage.\n");
        return 1;
    }

    if (battery_percent >= 90) {
        printf("Battery level: Full\n");
    } else if (battery_percent >= 70) {
        printf("Battery level: Good\n");
    } else if (battery_percent >= 40) {
        printf("Battery level: Moderate\n");
    } else if (battery_percent >= 20) {
        printf("Battery level: Low\n");
    } else {
        printf("Battery level: Very low\n");
    }

    return 0;
}
