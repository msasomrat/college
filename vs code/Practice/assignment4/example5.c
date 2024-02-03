#include<stdio.h>
int fact(int a)
{
    if(a==1) return 1;
    if (a==0) return 1;
    
   int  f=a*fact(a-1);

return f;
    
}
int main(){
    int s, f;
    printf("Enter the number that you want factorial ");
    scanf("%d", &f);
    s=fact(f);
    printf("%d", s);
}