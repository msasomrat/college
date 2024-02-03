
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5,i;
    float result[5], average, sum;
    for(i=0;i<5;i++)
    {
        printf("Enter the marks of[%d] subject", i+1);
        scanf("%f", &result[i]);


    }
    average=sum/5;
    printf("Summation is= %f\n", sum);
    printf("Average is= %f\n", average);

    if(>=80)
    {
        printf("Your grade is A+");
    }
    else if(average>=70)
    {
        printf("Your grade is A");
    }
    else if(average>=60)
    {
        printf("Your grade is A-");
    }
    else if(average>=45)
    {
        printf("Your grade is B");
    }
    else if(average>=33)
    {
        printf("Your grade is c");
    }
    else
        printf("Your grade is F");
    return 0;
}
