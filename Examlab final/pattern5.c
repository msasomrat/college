#include<stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ", 64+row);// for low letter 96+col
        }
        printf("\n");
    }
}




