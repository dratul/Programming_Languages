#include <stdio.h>

int main(void) {
    int battery_percent = 76;
    int low_battery_limit = 20;

    // Arithmetic
    printf("Battery plus reserve = %d%%\n", battery_percent + low_battery_limit);
    printf("Battery groups = %d (Integer division)\n", battery_percent / low_battery_limit);
    printf("Battery remainder = %d%%\n", battery_percent % low_battery_limit);

    // Relational & Logical
    int needs_charging = (battery_percent < low_battery_limit) && (low_battery_limit != 0);
    printf("Needs charging: %d\n", needs_charging);

    // Ternary Operator
    int displayed_percent = (battery_percent > 100) ? 100 : battery_percent;
    printf("Displayed battery: %d%%\n", displayed_percent);

    // Bitwise Operator
    printf("Bitwise AND (10 & 3): %d\n", 10 & 3);

    return 0;
}