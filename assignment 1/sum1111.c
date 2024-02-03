#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the last digit of the series= ");
    scanf("%d", &n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i*i;
    }

    printf("Sum of total is %d ", sum);
    return 0;
}

