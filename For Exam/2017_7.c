#include <stdio.h>

void main()

{ int n = 10,* pn; 
char ch='H', *pch;
 void *pv;
  pn = &n; 
  pch=&ch;
   printf("Value of *pn = %d\n", *pn); 
   printf("Value of *pch=%c\n", *pch); 
   (char*)pn=pch;

printf("Value of *pn after conversion to char: %c \n", *pn);

(int*)pch- &n;
 printf("Value of *pch after conversion to int: %d pv = &ch; 
 printf("Value of *pv=%c\n", *(char*)pv); 
 pv = &n; 
 printf("Value of *pv %d\n", *(int*)pv);