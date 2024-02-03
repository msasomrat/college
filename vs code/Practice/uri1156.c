#include<stdio.h>
int main()
{
    int i, j=1;
    float sum=0;
    for ( i = 1; i <= 39; i +=2)
    {
        sum += (float)i/(float)j;
        j *=2;
    }
    printf("%.2f\n", sum);
    return 0;
    
}