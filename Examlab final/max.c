#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a>b&&a>c)
    {
        printf("largest value is %d\n", a);
    }
    else if(b>a&&b>c)
    {
        printf("largest value is %d\n", b);
    }
    else
    {
        printf("largest value is %d\n", c);
    }
    if(a<b&&a<c)
    {
        printf("lowest value is %d\n", a);
    }
    else if(b<a&&b<c)
    {
        printf("lowest value is %d\n", b);
    }
    else
    {
        printf("lowest value is %d\n", c);
    }
    return 0;
}
