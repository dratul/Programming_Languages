#include <stdio.h>

int main(void) {
    // 1. Declaration without initialization (contains garbage values)
    int arr1[5];

    // 2. Declaration with full initialization
    int arr2[5] = {10, 20, 30, 40, 50};

    // 3. Partial initialization (remaining elements are automatically set to 0)
    int arr3[5] = {10, 20}; // {10, 20, 0, 0, 0}

    // 4. Initializing all elements to 0
    int arr4[5] = {0};

    // 5. Implicit sizing (compiler infers size = 4)
    int arr5[] = {1, 2, 3, 4};

    return 0;
}