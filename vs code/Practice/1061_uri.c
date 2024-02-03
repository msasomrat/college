#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,p1,p2,d;
    scanf("%d", &d1);
    scanf("%d%d%d", &h1,&m1,&s1);
    scanf("%d", &d2);
    scanf("%d%d%d", &h2,&m2,&s2);
    p1= s1+m1*60+h1*60*60+d1*60*60*24;
    p2= s2+m2*60+h2*60*60+d2*60*60*24;
    d=p2-p1;
    printf("%d dia(s)\n", d/86400);
    printf("%d hora(s)\n", (d%86400)/3600);
    printf("%d minuto(s)\n", ((d%86400)%3600)/60);
    printf("%d segundo(s)\n", ((d%86400)%3600)%60);

    return 0;

}