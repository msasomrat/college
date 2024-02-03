#include<stdio.h>

int main()
{  
    int n,a,f=2,s;
     for(scanf("%d",&n);n--;)
        scanf("%d",&s),a+=f!=s,f=s;
    printf("%d",a);
}