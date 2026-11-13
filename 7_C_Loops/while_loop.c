#include <stdio.h>

// Loops can execute a block of code as long as a specified condition is true.
// Loops are handy because they save time, reduce errors, and they make code
// more readable.

int main() {
    int i = 0;

    // i as a variable name Because it's a counter variable and a common choice
    // in simple loops because it's short, traditional, and stands for 'index'
    // or 'iterator'.
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    printf("==================\n");

    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Go!\n");

    printf("==================\n");
    // While Loop With False Condition
    int ii = 10;

    while (ii < 5) {
        printf("This will never be printed\n");
        ii++;
    }

    return 0;
}