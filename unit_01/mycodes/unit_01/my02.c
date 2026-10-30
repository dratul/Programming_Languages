#include <stdio.h>

int main(void) 
{
    double first_supply_cost, second_supply_cost, total_cost_rupees;

    printf("Enter supply cost for the first local event (Rs.): ");
    if (scanf("%lf", &first_supply_cost) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter supply cost for the second local event (Rs.): ");
    if (scanf("%lf", &second_supply_cost) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate the combined supply cost
    total_cost_rupees = first_supply_cost + second_supply_cost;

    // Display result
    printf("Combined community event supply cost: Rs. %.2f\n", total_cost_rupees);

    return 0;
}