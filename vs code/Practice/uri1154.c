#include<stdio.h>
int main()
{
    int n, count =0, sum=0;
    while (1)
    {
        scanf("%d", &n);
        if (n<0)
        {
            break;
        }
        sum += n;
        count++;
        
    }
    printf("%.2f\n", (float)sum/count);
    return 0;
}