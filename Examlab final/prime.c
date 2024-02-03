#include <stdio.h>

int prime(int low, int high)
{
    printf("Prime number\n");
    int num,i,ct;

    for(num = low;num<=high;num++)
       {
         ct = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==0){
                 ct++;
                 break;
             }
        }

         if(ct==0 && num!= 1)
             printf("%d ",num);
    }
printf("\n");
}
int main()
{
    int low, high;
    printf("Input starting number of range: ");
    scanf("%d",&low);

    printf("Input ending number of range : ");
    scanf("%d",&high);
   prime(low,high);
}
