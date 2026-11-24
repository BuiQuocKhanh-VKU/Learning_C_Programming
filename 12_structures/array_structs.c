#include <stdio.h>

struct Student {
    char name[20];
    int age;
};
int main() {
    struct Student students[3] = {{"Liam", 20}, {"Anja", 22}, {"Jenny", 21}};
    int i;

    for (i=0; i <3; i++) {
            printf("%s is %d years old\n", students[i].name, students[i].age);

    }
    
    //printf("%s is %d years old\n", students[0].name, students[0].age);

    return 0;
}