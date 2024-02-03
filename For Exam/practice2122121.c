#include<stdio.h>
int main()
{
    int i = 3 ;
    for (i=-3 ; i<=13 ; i++)
    {
        if(i<3)
            continue;
        else
            break;
        printf("ICE\n");
    }
}