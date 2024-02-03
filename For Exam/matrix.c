#include<stdio.h>
int main()
{
    int i,max=0,j,n,m,count=0,x;
    printf("Enter row then column");
    scanf("%d%d", &m,&n);
    int matrix[m][n];
    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j <n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j < n; j++)
        {

            printf("%d\t", matrix[i][j]);
            if (matrix[i][j] > max)
            max = matrix[i][j];
            if (matrix[i][j] == x)
            count = count + 1;
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Max %d", max);
    printf("\nType the number that you want ");
    scanf("%d", &x);

    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j < n; j++)
        {

            if (matrix[i][j] == x)
            count = count + 1;
        }
        printf("\n");

    }
    printf("number of repetation %d", count);
    
}