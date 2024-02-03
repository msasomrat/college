#include<stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    printf("%d:%d:%d", (i/3600), (i%3600)/60,((i%3600)%60)%60 );
    return 0;
}