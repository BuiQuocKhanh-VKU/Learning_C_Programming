#include <stdio.h>

// The do/while loop always runs at least once, even if the condition is already
// false. This is different from a regular while loop, which would skip the loop
// entirely if the condition is false at the start.

// This behavior makes do/while useful when you want to ensure something happens
// at least once, like showing a message or asking for user input.
int main() {
    int i = 10;

    do {
        printf("i is %d\n", i);
        printf("hehe\n");
        i++;
    } while (i < 5);

    // user input
    int number;

    do {
        printf("Enter a positive number: ");
        // scanf("%d", &number);
    } while (number > 0);

    // even
    int ii = 0;

    while (ii <= 10) {
        printf("%d\n", ii);
        ii += 2;
    }

    // dice
    int dice = 1;

    while (dice <= 6) {
        if (dice < 6) {
            printf("No Yatzy\n");
        } else {
            printf("Yatzy!\n");
        }
        dice = dice + 1;
    }
    return 0;
}