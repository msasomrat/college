// 2018 question 1 c
#include<stdio.h>
int series(void);
int main(int arg[])
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", series());

    }
    return 0;
}
int series(void)
{
   static int series_num=100;
    series_num= series_num+23;
    return series_num;
}