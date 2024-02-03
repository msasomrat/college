#include<stdio.h>
int main()
{
    int y,m,d,i;
    printf("Enter the value = ");
    scanf("%d", &i);
    y=i/365;
    m=(i-y*365)/30;
    d=(i-y*365-m*30);
    printf("Year= %d Month= %d Day= %d", y, m, d);
    return 0;
}
