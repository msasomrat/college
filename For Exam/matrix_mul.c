#include<stdio.h>
int main()
{
    int i,j, m, n, x,y;
    printf("Enter the value of row and column of two matrix\n");
    scanf("%d%d%d%d", &m, &n, &x,&y);
    int matrix1[m][n], matrix2[x][y], matrix3[i][j];
    
    if(m==y)
    {
        printf("Enter first matrix: \n");
        for ( i = 0; i <m; i++)
        {
            for ( j = 0; i < n; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
            printf("\n");
        }
        printf("Enter second matrix: \n");
        for ( i = 0; i <x; i++)
        {
            for ( j = 0; i < y; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
            printf("\n");
        }
        printf("Enter second matrix: \n");
        
        for ( i = 0; i <m; i++)
        {
            for ( j = 0; i < y; j++)
            {
                matrix3[i][j] = 0;
                for(int k=0; k < n; k++) {
                matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
                printf("\n");
                 }
            }
        }

        printf("Multiplication matrix: \n");
        for ( i = 0; i <n; i++)
        {
            for ( j = 0; i < x; j++)
            {
                printf(" %d ", matrix3[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Multiplication is not possiable");
}