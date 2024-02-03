#include<stdio.h>
int main()
{
  int n, i = 0, Sum = 0;
  
  do
  {
     Sum = Sum + i;
     i=i+2;
  } while(i <= 98);
  
  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}