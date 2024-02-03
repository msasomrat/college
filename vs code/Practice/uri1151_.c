#include<stdio.h>
#include<conio.h>
int main()
{
    int n, sum=0, a=0, b=1,i=0;
    scanf("%d", &n);
    i=2;
    printf("%d %d ", a,b);
    while (i<n)
    {
        sum=a+b;
        printf("%d", sum);
        if (i==n+2)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
        
        
        a=b;
        b=sum;
        
        i++;
    }

}