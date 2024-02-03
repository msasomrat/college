#include<stdio.h>
int prime(int m, int n)
{
    int i, j, c=1;
    for ( i = m; i <= n; i++)
    {
        
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            c=0;
            break;
        }
        if (c==1)
        {
             printf("%d ",i);
        }
    }
    
        
        
    }
    
}
int main()
{
    prime(2, 50);
}