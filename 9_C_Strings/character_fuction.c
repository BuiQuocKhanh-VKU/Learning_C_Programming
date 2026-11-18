#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
    char a = '7';
    if (isdigit(a)) {
        printf("%c is digit\n", a);
    }
    // isalpha() a letter 'a', 'Z'
    // isdigit() a digit '0', '7'
    // isalnum() a letter or a digit 'a', '7'
    // isupper() an uppercase letter 'A', 'Z'
    // islower() a lowercase letter 'a', 'z'
    // isspace() white space, like a space, a tab or a new line ' ', '\n' return
    // 0;
    char text[] = "Room 42";
    int letters = 0;
    int digits = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (isalpha(text[i])) {
            letters++;
        } else if (isdigit(text[i])) {
            digits++;
        }
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);

    // password
    char password[] = "Secret42";
    int hasUpper = 0;
    int hasDigit = 0;
    int i;

    for (i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        }
        if (isdigit(password[i])) {
            hasDigit = 1;
        }
    }
    if (hasUpper && hasDigit) {
        printf("The password is OK\n");
    } else {
        printf("The password needs an uppercase letter and a digit\n");
    }
    return 0;
}