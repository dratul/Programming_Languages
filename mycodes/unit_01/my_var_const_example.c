#include <stdio.h>

#define TAX_RATE 0.05  // Preprocessor constant

int main(void) {
    const int ITEM_LIMIT = 100; // Read-only constant
    int quantity = 10;          // Variable (can change)
    double unit_price = 25.50;  // Variable
    
    // Calculate total price
    double subtotal = quantity * unit_price;
    double final_total = subtotal + (subtotal * TAX_RATE);

    printf("Quantity: %d (Limit: %d)\n", quantity, ITEM_LIMIT);
    printf("Final Total with Tax: $%.2lf\n", final_total);

    // Modifying a variable
    quantity = 15;
    printf("Updated Quantity: %d\n", quantity);

    return 0;
}