#include <stdio.h>
#include <string.h>

int main() {
    // string length
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));  // 26
    printf("%zu\n", sizeof(alphabet));  // 27

    // Concatenate Strings
    char str1[20] = "Hello ";
    char str2[] = "World!";

    strcat(str1, str2);
    printf("%s", str1);
    printf("%zu\n", sizeof(str1));

    // Copy Strings
    char str3[16] = "Hello World!123";
    char str4[17];
    strcpy(str4, str3);

    printf("%s\n", str4);
    printf("strlen_3 %zu\n", strlen(str3));
    printf("%zu\n", sizeof(str3));

    // Compare Strings
    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n",
           strcmp(str1, str3));  // Returns -4 (the strings are not equal)
    return 0;
}