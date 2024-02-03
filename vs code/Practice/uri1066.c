#include<stdio.h>
int main()
{
    int arr[5], i, ce=0,co=0,cp=0,cn=0;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>0)
        {
            cp++;
        }
        if (arr[i]<0)
        {
            cn++;
        }
        if (arr[i]%2==0)
        {
            ce++;
        }
        if (arr[i]%2!=0)
        {
            co++;
        }
        
        
    }
    printf("%d valor(es) par(es)\n", ce);
    printf("%d valor(es) impar(es)\n", co);
    printf("%d valor(es) positivo(s)\n", cp);
    printf("%d valor(es) negativo(s)\n", cn);
return 0;
    
}