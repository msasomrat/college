#include<stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    if (a>=0&&a<=400.00)
    {
        printf("Novo salario: %.2lf\n", a+(a*15)/100);
        printf("Reajuste ganho: %.2lf\n", (a*15)/100);
        printf("Em percentual: 15 %%");
    }
    else if (a>400.00&&a<=800.00)
    {
        printf("Novo salario: %.2lf\n", a+(a*12)/100);
        printf("Reajuste ganho: %.2lf\n", (a*12)/100);
        printf("Em percentual: 12 %%");
    }
    else if (a>800.00&&a<=1200.00)
    {
        printf("Novo salario: %.2lf\n", a+(a*10)/100);
        printf("Reajuste ganho: %.2lf\n", (a*10)/100);
        printf("Em percentual: 10 %%");
    }
    else if (a>1200.00&&a<=2000.00)
    {
        printf("Novo salario: %.2lf\n", a+(a*7)/100);
        printf("Reajuste ganho: %.2lf\n", (a*7)/100);
        printf("Em percentual: 7 %%");
    }
    else if (a>2000.00)
    {
        printf("Novo salario: %.2lf\n", a+(a*4)/100);
        printf("Reajuste ganho: %.2lf\n", (a*4)/100);
        printf("Em percentual: 4 %%");
    }
    return 0;
}