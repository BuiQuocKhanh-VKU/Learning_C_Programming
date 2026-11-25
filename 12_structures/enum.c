#include <stdio.h>

// An enum is a special type that represents a group of constants (unchangeable
// values).
enum Level { LOW = 1, MEDIUM, HIGH };

int main() {
    // Create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;

    // Print the enum variable
    switch (myVar) {
        case 1:
            printf("Low Level");
            break;
        case 2:
            printf("Medium level");
            break;
        case 3:
            printf("High level");
            break;
    }
    return 0;
}