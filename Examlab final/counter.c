#include<stdio.h>
int main()
{
    char str[200];
    int i, vowel=0, consonant=0, digit=0, space=0, special=0;
    printf("Enter a string");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            consonant++;
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            digit++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else
        {
            special++;
        }
    }
    printf("\nVowels = %d",vowel);
    printf("\nConsonants = %d",consonant);
    printf("\nDigits = %d",digit);
    printf("\nWhite spaces = %d",space);
    printf("\nSpecial characters = %d",special);
}
