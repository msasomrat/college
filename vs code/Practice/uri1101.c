#include<stdio.h>
int main()
{
    int sum=0;
    int a,b;
    for (int i = 0;; i++)
    {
        scanf("%d%d",&a,&b);
        if (a==0||b==0||a<0||b<0)
        goto help;
        
        if (a>b)
        {   int sum=0;
            int temp;
            temp=a;
            a=b;
            b=temp;
            for (int j = a; j <=b; j++)
            {
                
                { printf("%d ", j);
                    sum=sum+j;
                }
                
            }
            printf("sum=%d\n", sum);
        }
        else 
        {
       for (int j = a; j <=b; j++)
            {
                
                {   printf("%d ", j);
                    sum=sum+j;
                }
                
            }
          printf("sum=%d\n", sum);  
        }
        sum=0;
    }
    help:
return 0;
    
}