#include <stdio.h>
int main()
{
    int height, i, j, k;
    printf("Enter height\n");
    scanf("%d",&height);
    for(i=1; i<=height; i++)
   {
     for(j=1; j<=height; j++)
     {
       if(i==1 || i==height || i==j)
         printf("*");
       else
         printf(" ");
     }
     printf("\n");
   }
    return 0;
}