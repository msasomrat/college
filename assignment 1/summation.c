#include<stdio.h>
int main()
{
    int i,j,sum=0,n;
    printf("Enter the last digit of the series= ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
            sum=sum+j;
    }
    printf("Sum of total is %d ", sum);
    return 0;
}
