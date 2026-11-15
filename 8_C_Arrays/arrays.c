#include <stdio.h>

// Arrays are used to store multiple values in a single variable, instead of
// declaring separate variables for each value.

int main() {
    int myArray[] = {25, 50, 75, 3.15, 5.99};
    myArray[0] = 33;
    printf("%d", myArray[4]);
    return 0;
}