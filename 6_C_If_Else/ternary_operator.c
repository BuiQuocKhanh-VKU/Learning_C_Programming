#include <stdio.h>

// variable = (condition) ? expressionTrue : expressionFalse

int main() {
    int light = 25;
    if (light > 20) {
        printf("Light is turned on\n");
    } else {
        printf("Light is turned off \n");
    }

    int light2 = 30;
    (light2 > 40) ? printf("Light is turned on\n")
                  : printf("Light is turned off\n");

    int a = 10;
    int b = 20;
    int max = (a > b) ? a : b;

    printf("The largest number is %d\n", max);
    return 0;
}