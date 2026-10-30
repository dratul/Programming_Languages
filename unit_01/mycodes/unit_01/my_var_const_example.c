#include <stdio.h>

#define SERVICE_CHARGE 0.05  // Preprocessor constant

int main(void) {
    const int KIT_LIMIT = 100;       // Read-only constant
    int quantity = 10;               // Variable (can change)
    double kit_price_rupees = 25.50; // Variable
    
    // Calculate the cost of supplies for a community heritage walk
    double subtotal = quantity * kit_price_rupees;
    double final_total = subtotal + (subtotal * SERVICE_CHARGE);

    printf("Walk kits: %d (Limit: %d)\n", quantity, KIT_LIMIT);
    printf("Total cost: Rs. %.2f\n", final_total);

    // Modifying a variable
    quantity = 15;
    printf("Updated Quantity: %d\n", quantity);

    return 0;
}