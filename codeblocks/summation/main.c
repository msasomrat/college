#include <stdio.h>

int main()
{
  int n, sum = 0;

  printf("\n Please Enter the last number of the series ");
  scanf(" %d",&n);

  sum = (n * (n + 1) * (2 * n + 1 )) / 6;

  printf("\n The Sum of Series for %d = %d ",n, sum);

  return 0;


}
