#include<stdio.h>
int main()
{
    int n,i,sum=0,crab=0,crat=0,csapo=0;
    scanf("%d",&n);
    float crabp,cratp,csapop;
    int arr1[n];
    char arr2[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d%s", &arr1[i], &arr2[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum=sum+arr1[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (arr2[i]=='c'||arr2[i]=='C')
        {
            crab=crab+arr1[i];
        }
        else if (arr2[i]=='r'||arr2[i]=='R')
        {
            crat=crat+arr1[i];
        }
        else if (arr2[i]=='s'||arr2[i]=='S')
        {
            csapo=csapo+arr1[i];
        }
        
    }
    crabp=(float)crab*100/sum;
    cratp=(float)crat*100/sum;
    csapop=(float)csapo*100/sum;
    printf("Total: %d cobaias\n", sum);
    printf("Total de coelhos: %d\n", crab);
    printf("Total de ratos: %d\n", crat);
    printf("Total de sapos: %d\n", csapo);
    printf("Percentual de coelhos: %.2f \n", crabp);
    printf("Percentual de ratos: %.2f \n", cratp);
    printf("Percentual de sapos: %.2f \n", csapop);
  return 0;    
}