/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, avg;
  
  printf("Enter Subject 1 marks :");
  scanf("%d", &mark1);

  printf("Enter Subject  marks :");
  scanf("%d", &mark2);

  avg = (mark1 + mark2) / 2.0;

  printf(" Average : %d", avg);
  
  return 0;
}