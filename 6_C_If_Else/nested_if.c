#include <stdbool.h>
#include <stdio.h>
// A nested if lets you check for a condition only if another condition is
// already true.

int main() {
    int age = 20;
    bool isCitizen = true;
    if (age >= 18) {
        printf("Old enough to vote.\n");
        if (isCitizen) {
            printf("And you are a citizen, so you can vote!\n");

        } else {
            printf("But you must be a citizen to vote.\n");
        }

    } else {
        printf("Not old enough to vote.\n");
    }

    return 0;
}