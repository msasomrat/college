#include<stdio.h>
int fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    
    else
    {
        return fib(n-1)+fib(n-2);
    }
    
}
int main()
{
    int n,i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", fib(i));
        if (i<n)
        {
            printf(" ");
        }
        if (i>=n)
        {
            break;
        }
        
        
    }
    
    
    return 0;
}