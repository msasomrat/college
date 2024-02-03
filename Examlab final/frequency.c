#include<stdio.h>
int main()
{
    char str[100], ch;
    int i, count=0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character that you want");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; ++i)
    {
        if(ch==str[i])
            ++count;
    }

    printf("Frequency is %d", count);
    return 0;
}
