#include<stdio.h>

#include <math.h>
double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);
int main()
{
    int i;
    long long int x,y;
    
    int count=0;
    while (1)
    {
        scanf("%f", &x);
        if (x%2!=0)
        {
            printf("nota invalida");
        }
        scanf("%f", &y);
        if (y%2!=0)
        {
            printf("nota invalida");
        }
        else
        {
            printf("median=%.2f", x+y/2);
            count++;
        }

        if (count==1)
        {
            break;
        }
        
        
        
    }
    
    
}