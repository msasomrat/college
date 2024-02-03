#include<stdio.h>
int main()
{
    int i,a, b, count=0;
    scanf("%d%d", &a, &b);
    for ( i = 1; i<=b; i++)
    {
        
        printf("%d\t", i);

        count++;
        if (count>=a)
        {
            printf("\n");
            count = 0;
            continue;
            
        } 

    }
    
    return 0;
}
