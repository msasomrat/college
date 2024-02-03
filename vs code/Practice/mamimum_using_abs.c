#include <stdio.h>
#include <stdlib.h>
int main() {
 
   int a,b,c,m,n;
   scanf("%d%d%d", &a, &b, &c);
   m=((a+b+abs(a-b))/2);
   if (m>c)
   {
     printf("%d eh o maior", m);
   }
   else
   {
     printf("%d eh o maior", c);
   }
   
    return 0;
}