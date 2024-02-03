#include<stdio.h>
#include<math.h>
#include<cos.h>
#define pi 3.1416
#define max 180
int main()
{
    int angle;
    float x,y;
    angle=0;
    printf("Angle is ");
    while (angle<=max)
    {
        x=(pi/max)*angle;
        y=cos(x);
        printf("%15d %l3.4f\n", angle, y);
        angle=angle+10;
    }
    
    return 0;
}
