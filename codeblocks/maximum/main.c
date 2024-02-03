#include <stdio.h>


int main()
{
    float a,b,c;
    printf("Enter the value of a, b and c");
    scanf("%f %f %f", &a, &b, &c);
    if((a>b)&&(a>c))
    {
        printf("the maximum value from all three three number is %f ", a);
    }
    else if((b>a)&&(b>c))
    {
        printf("the maximum value from all three three number is %f ", b);
    }
    else
        printf("the maximum value from all three three number is %f ", c);




    return 0;
}
