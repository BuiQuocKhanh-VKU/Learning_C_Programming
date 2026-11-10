#include <stdio.h>

int main()
{
    // The float could not store the number exactly, so the last digits are wrong. The double stores it correctly.
    float myFloat = 1234567.89;
    double myDouble = 1234567.89;
    float myFloatNum = 3.5;

    printf("%.4f\n", myFloatNum);
    printf("%f\n", myFloat);   // 1234567.875000
    printf("%lf\n", myDouble); // 1234567.890000
    printf("%.1f\n", myFloat);

    float f1 = 35e3;  // 35 * 10^3 = 35000
    double d1 = 12E4; // 12 * 10^4 = 120000

    printf("%f\n", f1);
    printf("%lf\n", d1);
    printf("%.3f\n", d1);
    return 0;
}