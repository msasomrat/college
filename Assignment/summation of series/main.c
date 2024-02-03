#include <stdio.h>

int main()
{
    int sum,i,n;
    printf("Enter the last Digit of Series ");
    scanf("%d", &n);
    sum=0;
    {for(i=1;i<=n;i++)
        sum=sum+i*i;
    }
    printf("Summation of the series is= %d", sum);
    return 0;
}
