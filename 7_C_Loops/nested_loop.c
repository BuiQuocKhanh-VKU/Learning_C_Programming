#include <stdio.h>

// The "inner loop" will be executed one time for each iteration of the "outer
// loop"
int main() {
    int i, j;

    // Outer loop
    for (i = 1; i <= 2; ++i) {
        printf("Outer: %d\n", i);  // Executes 2 times

        // Inner loop
        for (j = 1; j <= 3; ++j) {
            printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
        }
    }

    int ii, jj;

    for (ii = 1; ii <= 3; ii++) {
        for (jj = 1; jj <= 3; jj++) {
            printf("%d ", ii * jj);
        }
        printf("\n");
    }
    return 0;
}