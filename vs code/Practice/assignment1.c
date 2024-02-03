#include<stdio.h>
int func(int m, int n, int p)
{
    float d,r1,r2;
    d=(n*n)-(4*m*p);
    if (m==0||d<0)
    {
        printf("Roots are imaginary");
    }
    else
    {
        r1=(-n+d)/(2*m);
        r2=(-n-d)/(2*m);
        printf("Roots are %f and %f", r1, r2);
    }
    

}
int main()
{
    float a, b,c;
    printf("Enter the value of a, b, c ");
    scanf("%f%f%f",&a, &b, &c);
    func(a, b, c);
}