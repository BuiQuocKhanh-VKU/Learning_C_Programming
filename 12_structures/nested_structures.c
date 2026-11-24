#include <stdio.h>

// nested structure is useful when you want to group related data
// together in layer

struct Owner {
    char firstName[30];
    char lastName[30];
};

struct Car {
    char brand[30];
    int year;
    struct Owner ownerC;  // Nested structure
};

int main() {
    struct Owner owner1 = {"Khanh", "Bui"};
    struct Car car1 = {"Toyota", 2010, owner1};
    // struct Car car1 = {"Toyota", 2010, {"Khanh", "Bui"}};

    printf("Car: %s (%d)\n", car1.brand, car1.year);
    printf("Owner: %s %s\n", car1.ownerC.firstName, car1.ownerC.lastName);

    return 0;
}