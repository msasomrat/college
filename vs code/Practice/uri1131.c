#include<stdio.h>
int main()
{
    int a, b, sum=0;
    int counta=0, countb=0, countc=0;
    int test,gre=0;
    //if_true:
    while (1)
    {
        scanf("%d%d", &a,&b);
        if (a>b)
        {
            
            counta++;
        }
        if (b>a)
        {
            countb++;
        }
        if (a==b)
        {
            countc++;
        }
        
        gre++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &test);

        if (test==2)
        {
            break;
        }
        
        
    }
    printf("%d grenais\n", gre);
    printf("Inter:%d\n", counta);
    printf("Gremio:%d\n", countb);
    printf("Empates:%d\n", countc);
    if (counta>countb)
    {
        printf("Inter venceu mais\n");
    }
    if (countb>counta)
    {
        printf("Gremio venceu mais\n");
    }
    if (counta==countb)
    {
        printf("Não houve vencedor");
    }
    
    

    /*printf("media = %.2f\n",sum/2);
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
    */
    
    return 0;

}