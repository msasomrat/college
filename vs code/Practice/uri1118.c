#include<stdio.h>
int main()
{
    float a, sum=0;
    int count=0;
    int test;
    if_true:
    while (count<2)
    {
        scanf("%f", &a);
        if (a>=0 && a<=10)
        {
            sum+=a;
            count++;
        }
        if (a<0 || a>10)
        {
            printf("nota invalida\n");
        }
        
    }
    printf("media = %.2f\n",sum/2);
    if (count==2)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &test);
        if (test==1)
        {
            count=0;
            goto if_true;
        }
        if (test==2)
        {
            goto if_false;
        }
        
        
    }
    if_false:
    
    return 0;

}