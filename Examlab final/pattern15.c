#include<stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {

         for(col=1;col<=row;col++)
        {
            printf("%d ", col*row);
        }
        printf("\n");
    }
}
