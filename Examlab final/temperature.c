#include<stdio.h>
int main()
{
    int a;
    float c,f;
    printf("Enter 1 for c to f & 2 for f to c ");
    scanf("%d", &a);
    if(a==1)
    {
        scanf("%f", &c);
        f=(9*c/5)+32;
        printf("temperature in F = %f", f);
    }
    else if(a==2)
    {
        scanf("%f", &f);
        c=(5*(f-32))/9;
        printf("temperature in c = %f", c);
    }
    else
        printf("wrong selection");
    return 0;
}
