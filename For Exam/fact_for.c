#include<stdio.h>
int main()
{
    long double n,s=1;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        s=s*i;
    }
    printf("%ld", s);
}