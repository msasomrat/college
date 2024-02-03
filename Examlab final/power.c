#include<stdio.h>
#include<math.h>
int main()
{
    long long int x,n,p;
    printf("Enter the base and power\n");
    scanf("%lld %lld", &x, &n);
    p=pow(x,n);
    printf("power is = %lld", p);
return 0;
}
