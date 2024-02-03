#include<stdio.h>
int main()
{
    int a, counta=0, countg=0, countd=0;
    while (1)
    {
        scanf("%d", &a);
        if (a==1)
        {
            counta++;
        }
        if (a==2)
        {
            countg++;
        }
        if (a==3)
        {
            countd++;
        }
        if (a==4)
        {
            break;
        }
        else
        continue;
        
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", counta);
    printf("Gasolina: %d\n", countg);
    printf("Diesel: %d\n", countd);

    return 0;
    
}