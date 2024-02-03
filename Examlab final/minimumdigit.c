#include<stdio.h>

int main ()
{
    int i, j = 0, n, ara[10];

    printf("Enter A Number: ");
    scanf("%d", &n);

    if(n < 10){
        printf("%d\n", n+10);
    }

    else {
        for(i = 9; i >= 2; i--){
            while(n % i == 0){
                n /= i;
                ara[j] = i;
                j++;
            }
        }

        if(n == 1){
            for(i = j-1; i >= 0; i--){
                printf("%d", ara[i]);
            }
            printf("\n");
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}
