#include<stdio.h>
#include<string.h>
int main()
{
    
    char *ptr2;
    strcpy(ptr1,"test");
    strcpy(ptr2,"papers");
    printf("\n%s%s", *ptr1,*ptr2);
    return 0;
}
