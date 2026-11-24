#include <stdio.h>

// the inline version suggests to the compiler to copy the function's code
// directly where it is used.

// This can make short, frequently used functions a little faster, because it
// removes the small delay of a normal function call.
static inline int add(int a, int b) {
    return a + b;
}
int main() {
    printf("%d", add(5, 4));
    // Here, the compiler might replace add(5, 3) with the code 5 + 3 directly
    // - saving the time it would take to call a separate function.

    return 0;
}

// Inline functions are best for small, simple functions. Avoid using them for:

// Large functions (they make your program bigger)
// Recursive functions
// Functions that are rarely called