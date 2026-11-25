#include <stdio.h>

// In short: Padding means the compiler sometimes adds empty spaces inside a
// struct to keep things fast and properly aligned in memory.

struct Example {
    // char a;  // 1 byte
    // int b;   // 4 bytes //starts at a memory address that's a multiple of 4
    // char c;  // 1 byte

    int b;   // 4 bytes
    char a;  // 1 byte
    char c;  // 1 byte
};
int main() {
    printf("Size of struct: %zu bytes\n", sizeof(struct Example));
    return 0;
}