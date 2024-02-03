#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of n");
    scanf("%d", &n);
    for(i=1; i<=n; i=i+2)
    {
        sum= sum+ i*i;
    }
    printf("summation is = %d", sum);
}
