/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1, int n2);
int maximum(int n3, int n4);
int multiply(int n5, int n6);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int n1, int n2)//first function
{
  int min = 0;

  if(n1 > n2)
  {
    min = n2;
  }
  else
  {
    min = n1;
  }
  return min;
}

int maximum(int n3, int n4)//second function
{
  int max = 0;

  if(n3 > n4)
  {
    max = n3;
  }
  else
  {
    max = n4;
  }
  return max;
} 

int multiply(int n5, int n6)//third function
{
  int prod = 0;

  prod = n5 * n6;

  return prod;
}

