#include <math.h>
#include <stdio.h>

// The math functions return a double value
int main() {
    // Square Root
    printf("%.2f", sqrt(16));

    // Round a Number
    printf("%f\n", ceil(1.4));   // 2.000000
    printf("%f\n", floor(1.4));  // 1.000000

    // Power
    printf("%f", pow(4, 3));  // 64.000000
    return 0;
}