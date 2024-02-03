#include<stdio.h>
int main()
{
    int n, x,y,i=0,k=0,sum=0;
    scanf("%d", &n);
    while (i<n)
    {
        scanf("%d%d", &x, &y);
        sum=0;
        for (int j = x; k < y; j++)
        {
            if (j%2!=0)
            {
                sum= sum+j;
                k++;
            }
            
            
        }
        printf("%d\n", sum);
        k=0;
        i++;
        
    }
    return 0;
}