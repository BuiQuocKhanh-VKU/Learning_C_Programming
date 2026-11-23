#include <stdio.h>

// variables are only accessible inside the region they are created. This is
// called scope

// Function parameters are also local variables. They are created when the
// function is called, and removed when the function is finished
void myFunction() {
    // Local variable that belongs to myFunction
    int x = 5;
    printf("%d\n", x);
}

int main() {
    myFunction();
    // printf("%d", x);
    return 0;
}