#include <stdio.h>
int main()
{
    int x = 5;
    int y = 2;
    // int result = x / y;
    float result = x / y;

    // Explicit Conversion
    float result2 = (float)x / y;
    printf("%.1f\n", result);
    printf("%.1f\n", result2);

    int maxScore = 500;
    int userScore = 423;
    float percentage = (float) userScore / maxScore * 100;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);
}