#include<stdio.h>
int main()
{
    int i, j, a;
    scanf("%d", &a);
    for ( i = 1; i <= a; i++)
    {
        //for ( j = 0; j < 3; j++)
        {
            printf("%d %d %d\n", i, i*i, i*i*i);
        }
        
    }
    
}