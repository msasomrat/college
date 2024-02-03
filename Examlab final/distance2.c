#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,z1,z2,x,y,z;
    float d;
    printf("Enter the x1, y1, z1 \n");
    scanf("%d%d%d",&x1,&y1, &z1);
    printf("Enter the x2, y2, z2 \n");
    scanf("%d%d%d",&x2,&y2, &z2);

    x=x2-x1;
    y=y2-y1;
    z=z2-z1;
    d=sqrt((x*x+y*y+z*z));
    printf("Distance = %f", d);
    return 0;

}

