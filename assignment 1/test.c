// program to find odd or even without module oprator
#include <stdio.h>
int main()
{
int number = 9, remainder, n=2;
remainder=number-(n*(number/n));
if(remainder == 0) {
printf("The number is even\n");
}
else {
printf("The number is odd\n");
}
return 0;
}
