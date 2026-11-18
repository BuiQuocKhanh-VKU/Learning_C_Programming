#include <stdio.h>

int main() {
    int myNumber[] = {1, 4, 4, 12};
    for (int i = 0; i < 6; i++) {
        printf("%p\n", &myNumber[i]);
    }
    printf("%zu\n", sizeof(myNumber));

    printf("===============\n");

    // The memory address of the first element is the same as the name of the
    // array:
    int myNumbers[4] = {25, 50, 75, 100};
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);

    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers + 1));
    printf("===============\n");
    // loop
    int* ptr = myNumbers;
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
        // printf("%p\n", (ptr + i));
    }

    return 0;
}