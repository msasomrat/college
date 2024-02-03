#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        int a,b;
        scanf("%d%d", &a,&b);
        if (b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n",(float)a/b*1.00);
        }
        
    }
     
     return 0;
}