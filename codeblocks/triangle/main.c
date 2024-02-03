#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,area,s;
    printf("Enter the value of a, b and c");
    scanf("%f %f %f", &a, &b, &c);
    if((a+b)<c|| (b+c)<a|| (c+a)<b)
    {
        printf("Value is not correct");
    }
    else
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The perimeter of this triangle is= %f", 2*s);
        printf("The area of this triangle is= %f", area);
    }



    return 0;
}
