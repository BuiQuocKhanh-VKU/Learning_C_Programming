#include <stdio.h>

// create a new name (an alias) for an existing type. This can make complex
// declarations easier to read, and your code easier to maintain.

// Without typedef:
// struct Car {
//     char brand[30];
//     int year;
// };

// With typedef:
typedef struct {
    char brand[30];
    char model[30];
    int year;
} Car;

int main() {
    Car car1 = {"BMW", "X5", 1999};
    Car car2 = {"Ford", "Mustang", 1969};
    Car car3 = {"Toyota", "Corolla", 2011};

    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    return 0;
}