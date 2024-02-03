// question 2018 Q2 A
#include<stdio.h>
int main()
{
    int a,b,c,x=0,y=0;
    float avg=0;
    scanf("%d%d%d", &a,&b,&c);
    {
        if (a>b&&a>c)
    {
        x=a;
    }
    else if (b>a&&b>c)
    {
        x=b;
    }
    else
    {
        x=c;
    }
    printf("Largest number is =%d\n",x);
    }
    {
     if (a<b&&a<c)
    {
        y=a;
    }
    else if (b<a&&b<c)
    {
        y=b;
    }
    else
    {
        y=c;
    }
    printf("Largest number is =%d\n",y);
    }
    avg=(x+y)/2;
    printf("%f", avg);
}