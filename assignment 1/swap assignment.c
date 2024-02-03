#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a and b= ");
    scanf("%d%d", &a,&b);
    printf("Before swap a=%d and b=%d \n", a, b);
    c=a;
    a=b;
    b=c;
    printf("After swap a=%d and b=%d \n", a, b);



{   int a,b,*x,*y,c;
    printf("Enter the value of a and b= ");
    scanf("%d%d", &a,&b);
    printf("Before swap a=%d and b=%d \n", a, b);
    x=&a;
    y=&b;
    c=*x;
    *x=*y;
    *y=c;
    printf("After swap a=%d and b=%d \n", a, b);
}
{   int a,b;
    printf("Enter the value of a and b= ");
    scanf("%d%d", &a,&b);
    printf("Before swap a=%d and b=%d \n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap a=%d and b=%d \n", a, b);
}


    return 0;
}

