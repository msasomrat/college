#include <stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,row,col;
    printf("\n Enter row and column: ");
    scanf("%d %d",&row,&col);
    printf("\n Enter A matrix");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n Enter B matrix");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }        
    printf("\n Sum of the two matrices: \n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d \t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}