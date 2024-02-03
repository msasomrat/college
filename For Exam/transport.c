#include<stdio.h>

int main()
{
    int i , j , x ,y , n;
    printf("Enter row , column : ");
    scanf("%d %d" , &x , &y);
    int m[x][y];

    printf("\n\n");
    for (i=0; i<x; i++)
        for (j=0; j<y; j++)
            scanf("%d" , &m[i][j]);

    printf("\n\nYour Matrix\n\n");
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
            printf("%d\t" , m[i][j]);
        printf("\n");
    }


   
    printf("\n\nYour Transpose Matrix\n\n");
    for(i=0 ; i<y ; i++)
    {
        for(j=0 ; j<x ; j++)
            printf("%d\t" , m[j][i]);
        printf("\n");
    }
}