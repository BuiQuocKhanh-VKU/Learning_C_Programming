#include <stdio.h>
int main()
{
    int age = 20;
    char name[] = "Quoc Khanh";
    printf("my name is %s and my age is %d\n", name, age);
    printf("============\n");
    int a = 5;
    int b = 10;
    int temp;

    // Swap the values of a and b
    temp = a;
    a = b;
    b = temp;

    printf("a is %d, b is %d", a, b);
    return 0;
}