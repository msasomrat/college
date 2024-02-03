#include<stdio.h>
#include<string.h>
int main()
{
	char* string1=malloc(4*sizeof(int));
	char* string2=malloc(4*sizeof(int));
	strcpy(string1 , "green");
	strcpy(string2 , "color");
	printf("%s %s\n" , string1 , string2);
	return 0;
}