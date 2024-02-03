#include<stdio.h>
int main()
{
    float i,j;
    for (i = 0; i <2.2; i=i+.2)
    {
        for (j=1; j<=3; j++)
        {
            printf("I=%.1f J=%.1f\n", i,i+j);
        }
        
    }
    return 0;
}