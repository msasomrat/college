#include<stdio.h>
int main()
{

    int n,i, sum=0;
    printf("Enter the number = \n");
    scanf("%d", &n);
    if(n<0)
    {
        for(i=n; i<=1;i++)
            sum=sum+i;
    }
    else if(n>0)
    {
        for(i=1; i<=n;i++)
            sum=sum+i;
    }
    printf("%d", sum);
}
