#include <stdio.h>

// passing structs to functions or changing their values.

// Define a struct
struct Car {
    char brand[30];
    int year;
};

int main() {
    struct Car car = {"Toyota", 2020};

    // Declare a pointer to the struct
    struct Car* ptr = &car;

    // Access members using the -> operator
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    printf("%zu\n", sizeof(car));
    return 0;
}