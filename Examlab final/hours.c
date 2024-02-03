#include<stdio.h>
int main()
{
    int i;
    int h,m,s;
    printf("Enter the value = ");
    scanf("%d", &i);
    h=i/3600;
    m=(i-h*3600)/60;
    s=i-h*3600-m*60;
    printf(" hours= %d , minutes= %d, second= %d", h,m,s);
    return 0;

}
