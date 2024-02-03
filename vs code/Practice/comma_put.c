#include<stdio.h>
#include<string.h>
int main()
{
    int count=0, count1=0;
    char str[100];
    scanf("%s", str);
    //int n=strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = count; i >=0; i--)
    {

        printf("%c", str[i]);
        count1++;
        if ((count1-1)%3==0 && i!=0)
        {
            printf(",");
        }
        
        
    }
    
    
    
}