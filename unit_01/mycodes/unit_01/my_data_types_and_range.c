#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("=========================================\n");
    printf(" INDIA & ELECTRONICS: C DATA TYPE SIZES  \n");
    printf("=========================================\n\n");

    // Integer Types
    printf("[INTEGER TYPES]\n");
    printf("Type: char          | Size: %zu byte(s)  | Range: %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("Type: unsigned char | Size: %zu byte(s)  | Max  : %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("Type: short         | Size: %zu byte(s)  | Range: %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("Type: int           | Size: %zu byte(s)  | Range: %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("Type: unsigned int  | Size: %zu byte(s)  | Max  : %u\n", sizeof(unsigned int), UINT_MAX);
    printf("Type: long          | Size: %zu byte(s)  | Range: %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("Type: long long     | Size: %zu byte(s)  | Range: %lld to %lld\n\n", sizeof(long long), LLONG_MIN, LLONG_MAX);

    // Floating-Point Types
    printf("[FLOATING-POINT TYPES]\n");
    printf("Type: float         | Size: %zu byte(s)  | Precision: %d digits\n", sizeof(float), FLT_DIG);
    printf("  -> Min Positive: %e\n", FLT_MIN);
    printf("  -> Max Positive: %e\n\n", FLT_MAX);

    printf("Type: double        | Size: %zu byte(s)  | Precision: %d digits\n", sizeof(double), DBL_DIG);
    printf("  -> Min Positive: %e\n", DBL_MIN);
    printf("  -> Max Positive: %e\n", DBL_MAX);

    return 0;
}