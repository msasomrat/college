#include<stdio.h>
int fib(long long int i)
{
    if(i==0)
    {
        return 0;
    }
    if(i==1)
    {
        return 1;
    }
    else
    {
        return fib(i-1)+fib(i-2);
    }

}
int main()
{
    long long int n,i;
    printf("Enter n ");
    scanf("%lld", &n);
    for(i=0;i<n; i++)
    {
        printf("%lld\n", fib(i));
    }
}
