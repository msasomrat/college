#include<stdio.h>
#include<math.h>
int square(float s)
{
    float a,p,v;
    printf("For square\n");
    printf("area= %f\n", a=s*s);
    printf("perimeter= %f\n", p=4*s);
    printf("Volume= %f\n", v=6*s*s);
}
int re(float p, float q)
{
    float a,pe,v;
    printf("For rectangle\n");
    printf("area= %f\n", pe=p*q);
    printf("perimeter= %f\n", v=2*(p+q));
    //printf("Volume= %f\n", v=(4/3)*3.1416*s*s*s);
}
int circle(float r)
{
    float a,p,v;
    printf("For circle\n");
    printf("area= %f\n", a=3.1416*r*r);
    printf("perimeter= %f\n", p=2*3.1416*r);
    printf("Volume= %f\n", v=(4/3)*3.1416*r*r*r);
}
int triangle(float a, float b, float c)
{
    float pe,area,s;
    if((a+b)>=c&&(b+c)>=a&&(c+a)>=b)
    {
    pe=a+b+c;
    s=pe/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area= %f\n", area);
    printf("perimeter= %f\n", pe);
    }
    else
    {
        printf("Triangle is not possiable\a");
    }


}
int main()
{
    float s, p, q, r,a,b,c;
    printf("Enter Square value= ");
    scanf("%f", &s);

    printf("Enter rectangle value= ");
    scanf("%f%f", &p, &q);

    printf("Enter circle value= ");
    scanf("%f", &r);
    printf("Enter triangle value= ");
    scanf("%f%f%f", &a, &b,&c);
    square(s);
    re(p,q);
    circle(r);
    triangle(a,b,c);
}
