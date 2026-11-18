#include <stdio.h>

// Strings are used for storing text/characters.

int main() {
    char greetings[] = "Hello World!";
    printf("%c\n", greetings[0]);
    printf("%s\n", greetings);

    greetings[0] = 'B';
    printf("%s\n", greetings);
    printf("==================\n");

    printf("%zu\n", sizeof(greetings));
    printf("%c\n", greetings[11]);

    printf("==================\n");
    char carName[] = "Honda";
    for (int i = 0; i < 5; i++) {
        printf("%c\n", carName[i]);
    }

    printf("==================\n");
    char txt[] = "We are the \"guy\" man";
    printf("%s\n",txt);

    return 0;
}