#include <stdio.h>
int main() {
    int n = 10;
    for(int i=1; i<=n; i++) {
        for(int j = i; j<=n; j++)
            printf(" ");
        printf("2");
        if(i !=1) {
            int x = i-2;
            for(int k=1; k<= (2*x+1); k++){
                printf(" ");
            }
            printf("2");
        }
        printf("\n");
    }
    for(int i=1; i<= 2*n+1; i++) {
        printf("2");
    }
}