#include<stdio.h>
int main()
{
    double i, j;
    scanf("%lf%lf", &i, &j);
    if (i==0 && j==0)
    {
        printf("Origem\n");
    }
    else if ((i>0||i<0) && j==0)
    {
        printf("Eixo X\n");
    }
    else if (i==0 && (j>0||j<0))
    {
        printf("Eixo Y\n");
    }
    
    else if (i>0 && j>0)
    {
        printf("Q1\n");
    }
    else if (i<0 && j>0)
    {
        printf("Q2\n");
    }
    else if (i<0 && j<0)
    {
        printf("Q3\n");
    }
    else if (i>0 && j<0)
    {
        printf("Q4\n");
    }
    
    
    return 0;
}