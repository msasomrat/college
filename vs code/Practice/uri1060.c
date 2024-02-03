#include<stdio.h>
int main()
{
    float arr[6];
    int i, p=0;
    for ( i = 0; i<6; i++)
    {
        scanf("%f", &arr[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        if (arr[i]>0)
        {
            p++;
        }
        
    }
    printf("%d valores pasitivos\n", p);
    return 0;

}