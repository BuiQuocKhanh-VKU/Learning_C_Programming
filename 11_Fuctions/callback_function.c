#include <stdio.h>

// A callback function is a function that is passed as an argument to another
// function.
// void sayHello() {
//     printf("hello from callback\n");
// }

// void runCallBack(void (*callback)()) {
//     printf("Before call...\n");
//     callback();
//     printf("after call...\n");
// }
// int main() {
//     runCallBack(sayHello);
//     return 0;
// }

void addNumbers(int a, int b) {
  printf("The sum is: %d\n", a + b);
}

void calculate(void (*callback)(int, int), int x, int y) {
  callback(x, y);
}

int main() {
  calculate(addNumbers, 5, 3);
  return 0;
}