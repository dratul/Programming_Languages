// Type conversion in C
#include<stdio.h>
int main()
 { 
    int battery_percent = 10;
    float b; 
    b = battery_percent;
     printf("\n Battery percentage (integer) = %d \n", battery_percent); 
     printf("\n Battery percentage (float) = %.2f \n", b); 
     return 0; 
}