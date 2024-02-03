#include<stdio.h>
int main()
{
    int a, b, c, d, matrix1[10][10], matrix2[10][10], sum[10][10];
    printf("Enter the number of row and column  matrix1");
    scanf("%d%d",&a,&b);
    printf("Enter the elememt of first matrix");
    for ( c = 0; c < a; c++)
    {
        for ( d = 0; d < b; d++)
        {
            scanf("%d", *(matrix1+c)+ d);
        }
        
    }
    printf("Enter the elememt of second matrix");
    for ( c = 0; c < a; c++)
    {
        for ( d = 0; d < b; d++)
        {
            scanf("%d", *(matrix2+c)+ d);
        }
        
    }
    printf("Sum of two matrix\n");
    for ( c = 0; c < a; c++)
    {
        for ( d = 0; d < b; d++)
        {
           *(*(sum+c)+d)=*(*(matrix1+c)+d)+*(*(matrix2+c)+d);
           printf("%d\t",*(*(sum+c)+d) );
        }
       printf("\n");
    }
    
}