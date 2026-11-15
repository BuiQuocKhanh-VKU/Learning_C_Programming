#include <stdio.h>

int main() {
    int ages[] = {22, 20, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);
    for (i = 0; i < length; i++) {
        // printf("%d\n",ages[i]);
        sum = sum + ages[i];
    }
    printf("Sum = %.0f\n", sum);
    avg = sum / length;
    printf("The avg: %.2f\n", avg);

    // lowestAge
    int lowestAge = ages[0];
    for (i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
        printf("%d\n", ages[i]);
    }
    printf("%d\n", lowestAge);
    printf("===============\n");

    // contitnue and break
    int myNumbers[] = {3, -1, 7, 0, 9};
    int lengthD = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int j;

    for (j = 0; j < lengthD; j++) {
        if (myNumbers[j] < 0) {
            continue;  // skip negative numbers
        }
        if (myNumbers[j] == 0) {
            break;  // stop loop when zero is found
        }
        printf("%d\n", myNumbers[j]);
    }

    return 0;
}