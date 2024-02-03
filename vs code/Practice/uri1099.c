#include<stdio.h>
int main()
{
    int n,sum=0;
    int a,b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);
        if (a>b)
        {   int sum=0;
            int temp;
            temp=a;
            a=b;
            b=temp;
            for (int j = a+1; j <b; j++)
            {
                if (j%2!=0)
                {
                    sum=sum+j;
                }
                
            }
            printf("%d\n", sum);
        }
        else 
        {
       for (int j = a+1; j <b; j++)
            {
                if (j%2!=0)
                {
                    sum=sum+j;
                }
                
            }
          printf("%d\n", sum);  
        }
        sum=0;
    }
return 0;
    
}