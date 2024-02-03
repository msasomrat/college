
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, c=0;
    char str[200], ch;
    printf("Enter the String: ");
    gets(str);
    printf("Enter any character (present in string) to find its frequency: ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(ch==str[i])
            c++;
    }
    printf("\nFrequency of %c = %d", ch, c);
    getch();
    return 0;
}
