#include<stdio.h>
int main()
{
    long long int n,i,j,m[20];
    printf("Enter the test number= ");
    scanf("%lld", &n);
    if(n<=9)
    {
        printf("%lld", n);
    }
    else
    {

        j=0;
    for(i=9;i>=2;i--)

          {

             while(n%i==0)
             {
                  m[j]=i;
                    j++;
                 n=n/i;

             }
           }
    }
    if(n>9)
    {
        printf("-1");
    }
    else
    {
        j--;
        for(i=j;i>=0;i--)
        {
            printf("%d",m[i]);
        }
    }
}

