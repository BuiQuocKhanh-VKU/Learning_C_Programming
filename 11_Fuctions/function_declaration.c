#include <stdio.h>

// // Function declaration
// void myFunction();

// // The main function
// int main() {
//     myFunction();  // call the function
//     return 0;
// }

// // Function definition
// void myFunction() {
//     printf("I just got executed!");
// }

// Function declaration
int myFunction(int x, int y);

// The main function
int main() {
    int result = myFunction(5, 3);  // call the function
    printf("Result is = %d", result);
    return 0;
}

// Function definition
int myFunction(int x, int y) {
    return x + y;
}