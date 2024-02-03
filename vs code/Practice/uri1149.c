#include<stdio.h>
int main()
{
    int i,a,n, sum=0;
    while (1)
    {
        scanf("%d", &a);
        con:
        scanf("%d", &n);
        if (n<=0)
        {
            goto con;
        }
        if (n>0)
        {
            break;
        }
        
        

    }
    for ( i = 1; i <= n; i++)
    {
        sum = i+a;    
    }
    printf("%d", sum+n);
    
    return 0;
}
