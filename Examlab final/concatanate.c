#include<stdio.h>
int main()
{
    char str[50],str1[50],str2[50];
    int i=0, j=0;
    printf("Enter first string");
    scanf("%s", str1);
    printf("Enter second string");
    scanf("%s", str2);
    while(str1[i]!='\0')//or NULL
    {
        str[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i]!='\0')//or Null
    {
        str[j]=str2[i];
        i++;
        j++;
    }
    str[j]='\0';

    printf("concatanated string= %s", str);

}
