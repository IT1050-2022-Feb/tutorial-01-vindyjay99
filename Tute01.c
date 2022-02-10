/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

   //IT21184376

#include <stdio.h>

int main() {

  int mk1  , mk2;
  float avg;

  printf("Enter Marks  1 : ");
  scanf("%d" , &mk1);

  printf("Enter Marks 2 : ");
  scanf("%d" , &mk2);

  avg = (float) ((mk1 + mk2) / 2);

  printf("Average : %.2f\n" , avg);
  
  return 0;
}

