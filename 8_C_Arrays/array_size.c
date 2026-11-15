#include <stdio.h>

// the sizeof operator returns the size of a type in bytes.
int main() {
    int myNumbers[] = {10, 25, 50, 75, 100, 12};
    printf("%zu\n", sizeof(myNumbers));

    // formula divides the total size of the array by the size of one element:
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d\n", length);

    double myValues[] = {1.1, 2.2, 3.3, 4.3};
    int lengthD = sizeof(myValues) / sizeof(myValues[0]);

    printf("%d\n", lengthD);  // Prints 3
    return 0;
}