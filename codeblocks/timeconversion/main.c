#include <stdio.h>


int main()
{
    int n,h,m,s;
    printf("Enter the value of seconds");
    scanf("%d", &n);
    h=n/3600;
    printf("Hours = %d\n", h);
    n=n%3600;
    m=n/60;
    printf("Minutes = %d\n",m);
    n=n%60;
    s=n;
    printf("seconds= %d", s);
    return 0;

}
