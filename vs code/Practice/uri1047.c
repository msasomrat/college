#include<stdio.h>
int main()
{
    int a,b,c,d,h,m;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    {
        if (a>=c)
    {
        h=(24-a)+c;
    }
    else if (a<c)
    {
        h=c-a;
    }
    }
    {
    if (b>d)
    {
        m=(60-b)+d;
    }
    else if (b<=d)
    {
        m=d-b;
    }
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    
    return 0;
}
