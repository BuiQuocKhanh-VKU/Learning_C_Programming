#include <stdio.h>

// /A union is similar to a struct in that it can store members of different
// data types.

//  In a struct, each member has its own memory.
//  In a union, all members share the same memory, which means you can only use
// one of the values at a time.

union myUnion {         // Union declaration
    int myNum;          // Member (int)
    char myLetter;      // Member (char)
    char myString[36];  // Member (char array)
};

int main() {
    union myUnion u1;  // Create a union variable with the name "u1":
    u1.myNum = 1000;

    // Since this is the last value written to the union, myNum no longer holds
    // 1000 - its value is now invalid
    u1.myLetter = 'A';

    printf("myNum: %d\n", u1.myNum);        // This value is no longer reliable
    printf("myLetter: %c\n", u1.myLetter);  // Prints 'A'
    printf("Size of union: %zu bytes\n", sizeof(u1));

    return 0;
}