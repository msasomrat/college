#include<stdio.h>
int main()
{
    int x,i=0,k=0,sum=0;
    while (1)
    {
        scanf("%d", &x);
        sum=0;
        if (x==0)
        {
            break;
        }
        
        for (int j = x; k < 5; j++)
        {
            if (j%2==0)
            {
                sum= sum+j;
                k++;
            }
            
            
        }
        printf("%d\n", sum);
        k=0;
        
    }
    return 0;
}