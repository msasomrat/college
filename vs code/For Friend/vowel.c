#include <stdio.h>
#include<ctype.h>
int main()
{
  char ch, c;

  printf("Input a character\n");
  scanf("%c", &ch);
    c=toupper(ch);

  if ( (c >= 'A' &&c <= 'Z')) {
    if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
      printf("%c is a vowel.\n", c);
    else
      printf("%c is a consonant.\n", c);
  }
  else
    printf("%c is neither a vowel nor a consonant.\n", c);

  return 0;
}