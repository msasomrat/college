#include<stdio.h>
int main()
{
    int n=5, i;
    for ( ; ;)
    {
        printf("%dX%d=%d\n",n, i, n*i);
        i++;
        if(i>10)
        break;
    }
    return 0;
}