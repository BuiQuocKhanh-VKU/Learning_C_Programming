#include <stdio.h>

// When you know exactly how many times you want to loop through a block of
// code, use the for loop instead of a while loop:

// for (statement 1; statement 2; statement 3) {
//    #code block to be executed
// }

// Statement 1 is executed (one time) before the execution of the code block.
// Statement 2 defines the condition for executing the code block.
// Statement 3 is executed (every time) after the code block has been executed.

int main() {
    // int i;
    // 1-4
    //  for (i = 0; i< 5; i++) {
    //      printf("%d\n", i);
    //  }

    // even
    // for (int i = 0; i <= 10; i += 2) {
    //     printf("%i\n", i);
    // }

    // sum of number
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum = i + sum;
    }
    printf("sum = %d\n", sum);

    return 0;
}