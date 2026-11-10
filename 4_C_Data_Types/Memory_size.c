// The sizeof Operator
#include <stdio.h>
int main()
{
    // int	    2 or 4 bytes
    // float	4 bytes
    // double	8 bytes
    // char	1 byte

    // Knowing the size of data types helps you understand how much memory your program uses.
    // Because it can affect both performance and efficiency.
    // Using the right data type for the right purpose will save memory and improve the performance of your program.

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));

    printf("==========================\n");
    int items = 50;
    float cost_per_item = 30.66;
    float total_item = items * cost_per_item;
    char currency = '$';

    printf("Item: %i\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("%.2f %c\n", total_item, currency);

    return 0;

// short int | 2 bytes | -32,768 to 32,767 | %hd

// unsigned int | 2 or 4 bytes | 0 to 65,535 (2 bytes) 0 to 4,294,967,295 (4 bytes)	 | %u

// long int | 4 or 8 bytes | -2,147,483,648 to 2,147,483,647 (4 bytes) -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (8 bytes) | %ld
// long long int | 8 bytes | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | %lld
// unsigned long int | 4 or 8 bytes	0 to 4,294,967,295 (4 bytes) 0 to 18,446,744,073,709,551,615 (8 bytes) | %lu
// unsigned long long int | 8 bytes| 0 to 18,446,744,073,709,551,615 | %llu
// long double | 8, 12, or 16 bytes | Implementation-dependent, but more precision than double | %Lf
}