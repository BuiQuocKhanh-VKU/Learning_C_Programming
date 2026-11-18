#include <stdio.h>

int main() {
    // int myNum;
    // printf("Type a number: \n");
    // scanf("%d", &myNum);  //&:memory address

    // printf("Your number is: %d\n", myNum);

    // Multiple Inputs
    int myNumm;
    char myString[10];
    char fullName[30];
    printf("Type a number AND a character and press enter: \n");

    scanf("%d %s", &myNumm, myString);
    fgets(fullName, sizeof(fullName), stdin);

    printf("Your number is: %d\n", myNumm);
    printf("Your character is: %s\n", myString);
    printf("Hello %s\n", fullName);
    return 0;
}