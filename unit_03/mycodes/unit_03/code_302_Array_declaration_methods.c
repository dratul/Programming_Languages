#include <stdio.h>

int main(void) {
    // 1. Declaration without initialization (contains garbage values)
    int visitor_counts[5];

    // 2. Declaration with full initialization
    int rain_gauge_readings[5] = {10, 20, 30, 40, 50};

    // 3. Partial initialization (remaining elements are automatically set to 0)
    int led_channels[5] = {10, 20}; // {10, 20, 0, 0, 0}

    // 4. Initializing all elements to 0
    int device_status[5] = {0};

    // 5. Implicit sizing (compiler infers size = 4)
    int heritage_site_visitors[] = {1, 2, 3, 4};

    return 0;
}