#include <stdio.h>

// Pointer arithmetic means changing the value of a pointer to make it point to
// a different element in memory.

int main() {
    int myNumbers[4] = {25, 50, 75, 100};
    int* p = myNumbers;

    printf("%d\n", *p);        // 25
    printf("%d\n", *(p + 1));  // 50
    printf("%d\n", *(p + 2));  // 75
    printf("%d\n", *(p + 3));  // 100

    printf("===============\n");
    printf("%d\n", *p);  // 10
    p++;                 // move to myNumbers[1]
    printf("%d\n", *p);  // 20
    p--;                 // back to myNumbers[0]
    printf("%d\n", *p);  // 10

    p += 2;              // jump to myNumbers[2]
    printf("%d\n", *p);  // 30

    // Pointer Subtraction (Distance)
    int myNumber[5] = {10, 20, 30, 40, 50};
    int* start = &myNumber[1];  // points to 20
    int* end = &myNumber[4];    // points to 50

    int distance = end - start;
    printf("%d\n", distance);  // 3 elements apart

    printf("===============\n");
    int myNumberss[2] = {1, 2};
    char letters[] = "Hi";  // 'H', 'i', '\0'

    int* pi = myNumberss;  // int pointer
    char* pc = letters;    // char pointer

    printf("%p\n", pi);
    printf("%p\n", pi + 1);  // moves by sizeof(int) (4 bytes)
    printf("%p\n", pi + 2);  // moves by sizeof(int) (4 bytes)

    printf("%p\n", pc);
    printf("%p\n", pc + 1);  // moves by 1 byte

    // Looping with Pointers
    printf("Looping with Pointers===============\n");
    int myNumberr[4] = {25, 50, 75, 100};
    int* ptr = myNumberr;  // start of array
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *p);
        p++;  // move to next element
    }
    return 0;
}