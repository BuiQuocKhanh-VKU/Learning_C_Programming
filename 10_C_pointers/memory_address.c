#include <stdio.h>

// When a variable is created in C, its value is stored somewhere in the
// computer's memory.

// The memory address is the location of where the variable is stored.
// use the reference operator (&), and print it with the %p format specifier

int main() {
    int myAge = 43;
    printf("%p", &myAge);  // Outputs 0x7ffe5367e044
    // myAge gives the value in the box, and &myAge gives the address of the
    // box
    return 0;
}