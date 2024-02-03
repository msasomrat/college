#include<stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", (i/365), (i%365)/30,((i%365)%30)%365);
    return 0;
}