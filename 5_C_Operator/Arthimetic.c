#include <stdio.h>

int main()
{
    int x = 10;
    int y = 3;

    printf("%d\n", x + y); // 13
    printf("%d\n", x - y); // 7
    printf("%d\n", x * y); // 30
    printf("%d\n", x / y); // 3
    printf("%d\n", x % y); // 1

    int result1 = 2 + 3 * 4;   // 2 + 12 = 14
    int result2 = (2 + 3) * 4; // 5 * 4 = 20

    int z = 5;
    ++z;
    printf("%d\n", z); // 6
    --z;
    printf("%d\n", z); // 5

    printf("%d\n", result1);
    printf("%d\n", result2);
    return 0;
}