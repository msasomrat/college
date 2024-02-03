#include<stdio.h>
int main()
{
    int i,a,b,c,d,e,f,g;
    scanf("%d",&i);
    a=i/100;
    printf("%d nota(s) de R$ 100,00\n", a);
    a=i%100;
    b=a/50;
    printf("%d nota(s) de R$ 50,00\n", b);
    a=a%50;
    c=a/20;
    printf("%d nota(s) de R$ 20,00\n", c);
    a=a%20;
    d=a/10;
    printf("%d nota(s) de R$ 10.00\n", d);
    a=a%10;
    e=a/5;
    printf("%d nota(s) de R$ 5,00\n", e);
     a=a%5;
    f=a/2;
    printf("%d nota(s) de R$ 2,00\n", f);
     a=a%2;
    g=a/1;
    printf("%d nota(s) de R$ 1,00\n", g);
    return 0;
   
}