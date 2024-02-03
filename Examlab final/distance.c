#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x,y;
    float d;
    printf("Enter the x1, y1\n");
    scanf("%d%d",&x1,&y1);
     printf("Enter the x2, y2\n");
    scanf("%d%d",&x2,&y2);
    x=x2-x1;
    y=y2-y1;
    d=sqrt((x*x+y*y));
    printf("Distance = %f", d);
    return 0;

}
