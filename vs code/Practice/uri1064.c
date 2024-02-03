#include<stdio.h>
int main()
{
    float arr[6],sum=0;
    int i,count=0;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (arr[i]>0)
        {
            count++;
            sum = sum+ arr[i];
        }
        
    }
    printf("%d valores positivos\n", count);
    printf("%.2f\n",sum/count);

    return 0;
    
}