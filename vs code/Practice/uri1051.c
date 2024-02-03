#include<stdio.h>
int main()
{
    float i,a,b,c,d,e,f;
    scanf("%f", &i);
    if (i<=2000.00)
    {
        printf("Isento\n");
    }
    else if (i>=2000.00 && i<=3000.00)
    {
       printf("R$ %.2f\n", (i-2000)*.08);
    }
    
    else if (i>=3000.00 && i<=4500.00)
    {
       printf("R$ %.2f\n", (i-3000)*.18+1000.00*.08);
    }
    else if (i>=4500.00)
    {
       printf("R$ %.2f\n", (i-4500)*.28+1500.00*.18+1000.00*.08);
    }
    return 0;
    
}