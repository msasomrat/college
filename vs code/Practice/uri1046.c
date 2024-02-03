#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d%d", &a,&b);
    if (a>=b)
    {
        s=(24-a)+b;
    }
    else if (a<b)
    {
        s=b-a;
    }
    printf("O JOGO DUROU %d HORA(S)\n",s);
    
    return 0;
}
