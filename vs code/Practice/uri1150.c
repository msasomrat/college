#include<stdio.h>
int main()
{
    int i,x,z,sum=0,count=1;

    scanf("%d%d", &x, &z);
    while (z<=x)
    {
        scanf("%d", &z);
        
        
    }
    for ( i = x; i <= z; i++)
    {
        sum= sum+i;
       if (sum>z)
       {
           break;
       }
       count++;
            
            
    }
    
        
    printf("%d\n", count);

    return 0;
}

