/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  float marks, sum = 0, avg = 0;
  int i;

  for(i = 0; i < 2; i++)
  {
    printf("Subject %d\n", i+1);
    printf("Marks: ");
    scanf("%f", &marks);

    sum += marks;
  }

  avg = sum / 2.0;

  printf("Average of marks= %.2f\n", avg);

  return 0;
}

