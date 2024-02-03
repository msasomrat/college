
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the last digit of the series= ");
    scanf("%d", &n);
    if(n<0)
    for(i=n;i<=1;i++)
    {
        sum=sum+i;
    }
    else if(n>0)
    for(i=n;i>=1;i--)
    {
        sum=sum+i;
    }

    printf("Sum of total is %d ", sum);
    return 0;
}

