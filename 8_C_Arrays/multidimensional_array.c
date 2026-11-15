#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    printf("%d\n", matrix[0][2]);  // Outputs 2

    //
    printf("============\n");
    int matrixx[2][3] = {{1, 4, 2}, {3, 6, 8}};

    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrixx[i][j]);
        }
    }
    return 0;
}