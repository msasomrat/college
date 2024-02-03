#include<stdio.h>
int main()
{
    int a,b,i,sum,temp;
    scanf("%d%d", &a, &b);
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    
    for ( i = a+1; i < b; i++)
    {
        sum=i%5;
        if (i%5>=0 && (sum==2 || sum==3))
        {
            printf("%d\n", i);
        }
        
    }
    
    
    return 0;
}
