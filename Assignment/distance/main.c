#include<stdio.h>
#include<math.h>
int main()
{
    float x1, x2, y1, y2, a, b, distance;
    printf("Enter the value of x1 and y1= ");
    scanf("%f%f", &x1, &y1);
    printf("Enter the value of x2 and y2= ");
    scanf("%f%f", &x2, &y2);
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    distance=sqrt(a+b);
    printf("Distance between (%f, %f) and (%f, %f) is = %f \n",x1, x2, y1, y2, distance );

    {
         float x1, x2, z1, y1, y2,z2, a, b, c, distance;
    printf("Enter the value of x1 and y1 and z1= ");
    scanf("%f%f%f", &x1, &y1, &z1);
    printf("Enter the value of x2 and y2 and z2= ");
    scanf("%f%f%f", &x2, &y2, &z2);
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    c=(z2-z1)*(z2-z1);
    distance=sqrt(a+b+c);
    printf("Distance between (%f, %f, %f) and (%f, %f, %f) is = %f ",x1, y1, z1, x2, y2, z2, distance );
    return 0;
    }
}
