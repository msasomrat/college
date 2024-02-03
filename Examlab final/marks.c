#include<stdio.h>
int main()
{
    int a,b,c,d,e,t,choice;
    float avg,p;
    printf("Enter 1 to calculate from marks & 2 from Gp");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Enter fives marks");
        scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
        t=a+b+c+d+e;
        avg=t/5;
        p=(t*100)/500;
        printf("Total = %d \nAverage = %f \nPercentage = %f", t, avg, p);

    }
    if(choice==2)
    {
        printf("Enter fives GP");
        scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
        t=a+b+c+d+e;
        avg=t/5;
        p=(t*100)/15;
        printf("Total = %d \nAverage = %f \nPercentage = %f", t, avg, p);

    }

    return 0;
}
