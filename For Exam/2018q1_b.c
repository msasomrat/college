//question 2018 section A Q1(b)
#include<stdio.h>
int main()
{
    int i=8, j=5;
    float x=0.005, y=-0.01;
    printf("%d\n", 2*((i/5)+4*(j-3))%(i+j-2) );
      printf("%f\n", 2*((i/5)+4*(j-3))%(i+j-2) );
    printf("%d\n",(i>0)&&(j<5) );
    printf("%d",(i>0)||!(j<5) );

    return 0;
}