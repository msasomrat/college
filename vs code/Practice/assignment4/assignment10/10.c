#include<stdio.h>

int main ()
{
    int n , Q , i , j = 0 , digit[100] ; 
    printf("Enter an integer number = "); 
    scanf("%d" , &n); 
    
    if(n<=9 )
    {
        printf("Result is %d" , n); 
    } else 
    {
        for(i = 9 ; i >1 ; i--)
    {
        while(i%n == 0)
        {
            n = n /i ; 
            digit[j] = n; 
        }


    }


    }

}