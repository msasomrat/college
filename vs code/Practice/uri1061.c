#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2;
    scanf("%d", &d1);
    scanf("%d%d%d", &h1, &m1, &s1);
    scanf("%d", &d2);
    scanf("%d%d%d", &h2, &m2, &s2);
    if (h1>h2)
    {
        printf("%d\n", (d2-d1)-1);
    }
    else
    {
        printf("%d\n", (d2-d1));
    }
    if (m1>m2||h1>h2)
    {
        printf("%d\n", (h2-h1)+24);
    }
    else
    {
        printf("%d\n", (h2-h1));
    }
    if (m1>m2||s1>s2)
    {
        printf("%d\n", (m2-m1)+60);
    }
    else
    {
        printf("%d\n", (m2-m1));
    }
    if (s1>s2)
    {
        printf("%d\n", (s2-s1)+60);
    }
    else
    {
        printf("%d\n", (s2-s1));
    }
    return 0;
}