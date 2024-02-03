#include <stdio.h>
void main()

{

int a = 195;
char *ptr1;
unsigned char *ptr2;
ptr1 = (char*) &a;
printf("%d\n", *ptr1);
ptr2 = (unsigned char*) &a;
printf("%d\n", *ptr2);

}
