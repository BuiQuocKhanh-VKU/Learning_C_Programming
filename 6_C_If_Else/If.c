#include <stdbool.h>
#include <stdio.h>

// Use if to specify a block of code to be executed, if a specified condition is
// true Use else to specify a block of code to be executed, if the condition is
// false Use else if to specify a new condition to test, if the first condition
// is false / to check multiple / to test Use switch to specify many alternative
// blocks of code to be executed

int main() {
    int x = 20;
    int y = 18;
    // if
    if (x > y) {
        printf("x is greater than y\n");
    }

    // even or odd
    int num = 7;
    if (num % 2 == 0) {
        printf("THis is even!");
    } else {
        printf("THis is odd!");
    }

    // else
    int time = 20;
    bool isDay = time < 18;
    if (isDay) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }

    // else if
    int time2 = 16;

    bool isMorning = time < 12;
    bool isDay2 = time2 < 18;

    if (isMorning) {
        printf("Good morning.");
    } else if (isDay2) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }
    return 0;
}