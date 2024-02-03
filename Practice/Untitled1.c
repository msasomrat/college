
#include <stdio.h>

int main()
{
    int i, j, N, value;
    value=2;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(value%2==0)

            printf("%d ", value);

            value=value+2;
        }

        printf("\n");


    }

    return 0;
}
