#include <stdio.h>

// A function is a block of code which only runs when it is called.
// You can paste data, known as parameters, into a function.
// Important for reusing code: Define the code once, and use it many times.

// printf() is a function;

void myFucntion() {
    // void: means that the function does not have a return value.
    // They are "saved for later use"
    printf("Hello this is function!\n");
}

// sum of numbers
void calculateSum() {
    int x = 16;
    int y = 9;
    double z = 5.4;
    double sum = x + y + z;
    printf("sum = %lf\n", sum);
}
int main() {
    myFucntion();
    calculateSum();
    return 0;
}