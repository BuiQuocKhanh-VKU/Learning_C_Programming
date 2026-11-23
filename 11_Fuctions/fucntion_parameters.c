#include <stdio.h>

// Parameters and Arguments

// Parameters are specified after the function name, inside the parentheses. You
// can add as many parameters as you want, just separate them with a comma:

void myFunc(char ten[], int tuoi) {
    printf("Hello %s. You are %d year olds\n", ten, tuoi);
}

// sum of numbers
void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}

// return
int number(int x) {
    return 5 + x;
}
int numberr(int x, int y) {
    return x + y;
}
int main() {
    myFunc("Liam", 5);
    myFunc("Khanh Bui", 9);
    // /The value that is passed to the function is called an argument.
    // ten is a parameter, while Liam, Khanh Bui are arguments.

    // sum
    calculateSum(5, 3);

    // return
    printf("Result is: %d\n", number(6));
    printf("Result is: %d\n", numberr(5, 6));

    return 0;
}