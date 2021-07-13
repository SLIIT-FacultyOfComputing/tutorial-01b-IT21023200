/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2, total, avg;

  printf("Enter the mark 1 : ");
  scanf("%f", &mark1);

  printf("Enter the mark 2 : ");
  scanf("%f" ,&mark2);

  total = mark1 + mark2;
  avg = total / 2.0;

  printf("Average is %.2f ", avg);

  
  return 0;
}

