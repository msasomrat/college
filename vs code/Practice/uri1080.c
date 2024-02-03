#include<stdio.h>
int main()
{
    int n=0,arr[100];
    int i,max=arr[0];
    for ( i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>max)
        {
            max=arr[i];
            n=i;
        }
        
    }
    printf("%d\n%d", max,n+1);
    
return 0;
}