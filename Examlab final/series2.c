#include<stdio.h>
int main()
{
    long int i,n,sum=0;
    printf("Enter the value of n");
    scanf("%ld", &n);
    sum= sum+((n*(n+1)*(2*n+4)))/12;
    printf("summation is = %ld", sum);
}
