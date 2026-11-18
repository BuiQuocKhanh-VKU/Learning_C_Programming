#include <stdio.h>

int main() {
    // The first number (3) is how many strings the array can hold. The second
    // number (10) is the size of each string, including the \0 at the end
    char fruits[3][10] = {"Apple", "Banana", "Cherry"};

    printf("%s\n", fruits[2]);
    //
    for (int i = 0; i < 3; i++) {
        printf("print %i: %s\n", i, fruits[i]);
    }
    //
    printf("%c\n", fruits[1][0]);  // B

    //
    // strcpy(fruits[0], "Mango");
    char guests[4][20] = {"Liam", "Anja", "Jenny", "Olivia"};
    char name[] = "Jenny";
    int found = 0;
    int i;

    for (i = 0; i < 5; i++) {
        if (strcmp(guests[i], name) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%s is on the guest list\n", name);
    } else {
        printf("%s is not on the guest list\n", name);
    }
    return 0;
}