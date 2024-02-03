#include<stdio.h>
float get_gp(float s) {
    float gp=0;
    if(s>=80) gp=5;
    else if(s>=70) gp=4;
    else if(s>=60) gp=3;
    else if(s>=50) gp=2;
    else if(s>=40) gp=1;
    else if(s<40) gp=0;
    return gp;
}
int main()
{
    float s1,s2, s3, s4, s5, sum, average, percent, gpa;

    printf("Enter your five subject number ");

    scanf("%f%f%f%f%f",&s1,&s2, &s3, &s4, &s5);

    sum=s1+s2+s3+s4+s5;

    average=sum/5;
    percent=average;
    printf("Summation of your %f\n",sum);
    printf("Average of your %f\n",average);
    printf("percentage of your %f\n",percent);

   gpa=(get_gp(s1)+get_gp(s2)+get_gp(s3)+get_gp(s4)+get_gp(s5))/5;
   printf("Gpa is %f", gpa);
   return 0;
}


