#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,t,z;
    scanf("%f%f%f", &a,&b,&c);
    if ((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        s=(a+b+c);
        printf("Perimetro = %.1f\n", s);
    }
    else
    {
        z=((a+b)/2)*c;
        printf("Area = %.1f\n", z);
    }
   return 0; 
}