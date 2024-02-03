#include<stdio.h>
int power(float m, int n)
{
    float mul=1;
    int i;
    for ( i = 0; i < n; i++)
    {
        mul= mul * m;

    }
    printf("sum is %f", mul);
}
int main(){
    float a;
    int b;
    printf("Enter the value of x and n");
    scanf("%f%d",&a, &b);
    power(a,b);
}