#include<stdio.h>
#define get(x) #x
int main()
{
    int a, i,arr[a];
    
    scanf("%d", &a);
    for ( i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
          
    }
    for ( i = 0; i < a; i++)
    {
        if (arr[i]<0 && arr[i]%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if (arr[i]>0 && arr[i]%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        if (arr[i]<0 && arr[i]%2!=0)
        {
            printf("ODD NEGATIVE\n");
        } 
        if (arr[i]>0 && arr[i]%2!=0)
        {
            printf("ODD POSITIVE\n");
        }   
        if (arr[i]==0)
        {
           printf(get(NULL));
           printf("\n");
        }
               
    }
    
    return 0;
}