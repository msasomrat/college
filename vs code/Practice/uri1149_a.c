#include<stdio.h>
int main()
{
    int i,a,n, sum=0;
    while (1)
    {
        scanf("%d%d", &a, &n);
        while (1)
        {
            if(n<=0)
            {
                scanf("%d", &n);
            }
            if (n>0)
            {
                break;
            }
            
        }
        if (n>0)
        {
            break;
        }
        
        
    }
    for ( i = 0; i < n; i++)
    {
        sum =sum+i+a;    
    }
    printf("%d\n", sum);
    
    return 0;
}
