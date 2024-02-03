#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char g[5];
    float e, m, b, s, k, total, average, percentage;
    printf("Enter the five value ");
    scanf("%f%f%f%f%f", &e,&m, &b, &s,&k);
    total=e+m+b+s+k;
    average=total/5;
    percentage=total/5;
    printf("total is %f\n", total);
     printf("average is %f\n", average);
      printf("total is %f %%\n", percentage);

    if(average>=80)
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
