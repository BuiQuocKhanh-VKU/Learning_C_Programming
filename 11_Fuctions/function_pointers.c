#include <stdio.h>

// This means it stores the address of a function, allowing you to call that
// function using the pointer.
int add(int a, int b) {
    return a + b;
}
int main() {
    // returnType (*pointerName)(parameterType1, parameterType2, ...);
    int (*ptr)(int, int) = add;  // ptr is a pointer to the function add().

    int result = ptr(5, 3);  // ptr(5, 3) calls the function using the pointer.
    // int result = add(5,3);

    printf("Result: %d", result);
    return 0;
}