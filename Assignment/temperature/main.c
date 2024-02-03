#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    int n;
    printf("Enter choice(1 for c to f) and (2 for f to c)");
    scanf("%d", &n);
    if(n==1)
    {
        printf("Enter temperature in c");
        scanf("%f", &c);
        f=((9*c)/5)+32;
         printf("result in f is %f ", f);
    }
    else if(n==2)
    {
        printf("Enter temperature in f");
        scanf("%f", &f);
        c=((f-32)*5)/9;
         printf("result in c is %f ", c);
    }
    else
        printf("Enter valid choice");

    return 0;
}
