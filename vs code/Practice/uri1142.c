#include<stdio.h>
int main()
{
    int i,a, count=0;
    scanf("%d", &a);
    for ( i = 1; ; i++)
    {
        if (i%4!=0)
        {
            printf("%d ", i);
        }
        if (i%4==0)
        {
            printf("PUM\n");
        }
        
        
        count++;
        if (count>=4*a)
        {
            break;
        }
        

    }
    
    return 0;
}
