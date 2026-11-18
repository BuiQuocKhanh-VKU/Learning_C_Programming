#include <stdio.h>

// A pointer is a variable that stores the memory address of another variable as
// its value.

int main() {
    int myAge = 43;  // an int variable
    int* ptr = &myAge;

    printf("%d\n", myAge);  // Outputs the value of myAge (43)
    // Outputs the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("=======\n");

    return 0;
}