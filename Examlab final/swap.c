#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two number = ");
    scanf("%d%d", &a, &b);

    temp=a;
    a=b;
    b=temp;
    printf("After swap= %d %d \n", a,b);
    //without using another variable
    printf("enter two number = ");
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap= %d %d ", a,b);
    return 0;

}
