#include <stdio.h>
#include <string.h>
// Structures (also called structs) are a way to group several related variables
// (member)into one place.

// Unlike an array, a structure can contain many different data types (int,
// float, char, etc.).

struct myStructure {  // Structure declaration
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
    // create a structure variable of myStruture called s1
    struct myStructure s1;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'K';
    strcpy(s1.myString, "Some text");
    // struct myStructure s1 = {13, 'B', "Some text"};

    // Modify values
    //   s1.myNum = 30;
    //   s1.myLetter = 'C';
    //   strcpy(s1.myString, "Something else");

    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myString);
    // printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}