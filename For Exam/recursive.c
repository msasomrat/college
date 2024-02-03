#include<stdio.h>

void my(int n)
{
    if(n==0){
        printf("\n");
        return;
    }
    printf("%d",n);
    my(n-1);
    printf("%d",n);
}

int main()
{
  my(10);
  return 0;
}