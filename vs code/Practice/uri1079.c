#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float a,b,c,sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);   
        sum=sum+((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);
        printf("%.1f", sum);
        sum=0;
    }

return 0;
} 