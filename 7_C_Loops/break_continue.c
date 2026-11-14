#include <stdio.h>

// break = stop the loop completely.
// continue = skip this round, but keep looping.

int main() {
    int i;

    for (i = 0; i < 6; i++) {
        if (i == 2) {
            continue;
        }
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
    
    return 0;
}