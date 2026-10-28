#include <stdio.h>

// Format specifier = Special tokens that begin with a % symbol,
//                    followed by a character that specifies that data type
//                    and optional modifiers (width, precision, flags).
//                    They control how data is displayed or interpreted


int main(){
      int age = 25;
      float price = 40.52;
      double pi = 3.14928323523;
      char grade = 'A';
      char name[] = "Quoc Khanh";

      printf("age: %d \n", age);
      printf("price: %f \n", price);
      printf("pi: %lf \n", pi);
      printf("grade: %c \n", grade);
      printf("name: %s \n", name);
}
