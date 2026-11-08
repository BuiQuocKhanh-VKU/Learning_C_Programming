#include <stdio.h>
#include <stdbool.h>

int main (){

      // this is my first program! :)
      // printf("I like pizza!\n");
      // printf("It's really good!");


      // variable =  A reusable container for a value. 
      //             Behaves as if it were the value it contains

      // int = whole number (4 bytes in modern system)
      // float = single-precision decimal number (4 bytes)
      // double = double-precision decimal number (8 bytes)
      // char = single character (1 byte)
      // char[] = array of characters (size varies)
      // bool = true or false (1 byte, require <stdbool.h>)


      
      // int age = 25;
      // printf("you are %d years old ",age);

      //
      float gpa = 2.5;
      float price = 19.99;

      printf("your gpa %.1f\n", gpa);
      printf("the price is %.2f\n", price);

      double pi = 3.14980232398122;
      printf("The value double of pi is %.15lf\n", pi);

      char grade = 'A';
      printf("your grade is %c \n", grade);

      char name[] = "Quoc Khanh";
      char email[] = "khanh123@gmail.com";
      printf("your email %s\n", email);
      printf("hello bro %s \n", name);

      //
      bool isOnline = true;
      bool isStudent = 1;
      //printf("%d" ,isOnline);

      //if
      if(isOnline) {
            printf("Your are ONLINE");
      }
      else {
            printf("Your are OFFLINE");
      }

      return 0;
}