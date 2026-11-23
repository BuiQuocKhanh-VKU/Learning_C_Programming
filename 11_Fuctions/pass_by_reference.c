#include <stdio.h>

// void addTen(int x) {
//     x = x + 10;
// }

// return
int addTenn(int x) {
    return x + 10;
}

// Pass By Reference

// Sometimes you want a function to change the original variable.
// give the function the memory address of the variable, instead of a copy of
// its value.

void addTen(int* x) {
    *x = *x + 10;
}

// Swap Two Variables
// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main() {
    // int num = 5;
    // addTen(num);
    // printf("%d\n", num);  // 5

    // // return
    // int myNum = 5;
    // myNum = addTenn(myNum);
    // printf("%d\n", myNum);  // 15

    int myNum = 5;
    addTen(&myNum);
    printf("%d\n", myNum);  // 15

    // swap
    // int x = 5;
    // int y = 10;

    // swap(&x, &y);

    // printf("x is %d, y is %d\n", x, y);  // x is 10, y is 5

    return 0;
}