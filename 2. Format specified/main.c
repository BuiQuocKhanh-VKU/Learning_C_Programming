#include <stdio.h>

// Format specifier = Special tokens that begin with a % symbol,
//                    followed by a character that specifies that data type
//                    and optional modifiers (width, precision, flags).
//                    They control how data is displayed or interpreted


int main(){
      // int age = 25;
      // float price = 40.52;
      // double pi = 3.14928323523;
      // char grade = 'A';
      // char name[] = "Quoc Khanh";

      // printf("age: %d \n", age);
      // printf("price: %f \n", price);
      // printf("pi: %lf \n", pi);
      // printf("grade: %c \n", grade);
      // printf("name: %s \n", name);

      // width
      int num1 = 1;
      int num2 = 10;
      int num3 = 100;

      printf("%5d\n", num1);
      printf("%+d\n", num2);
      printf("%-d\n", num3);
      printf("===================================\n");

      // precision with flag
      float price1 = 1.2;
      float price2 = 14.78223;
      float price3 = 133.211234;
      printf("%.3f\n", price1);
      printf("%.3f\n", price2);
      printf("%7.2f\n", price3);
}
