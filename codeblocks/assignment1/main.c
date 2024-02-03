#include <stdio.h>
#include<math.h>
int main()
{
   float x1, x2, y1, y2,a, b, distance;
   printf("Enter the value of x1 and y1= ");
   scanf("%f%f", &x1, &y1);
   printf("Enter the value of x2 and y2= ");
   scanf("%f%f", &x2, &y2);
   a=x2-x1;
   b=y2-y1;
   distance=sqrt((a*a)+(b*b));
   printf("Distance between (%f, %f) and (%f, %f) is =%f",x1,y1,x2,y2,distance);

    return 0;
}
