#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("* ");
    }
    printf("\n");
    int u=1,v=(t*2)-2;
    while(u<=v)
    {
        for(i=1;i<=u;i++)printf(" ");
        printf("*");
        for(j=u+2;j<v;j++)printf(" ");
        if(u<(v-1))printf("*");
        printf("\n");
        u++;
        v--;
    }
    u=t-2;
    v=1;
   for(i=1;i<=(t-2);i++)
    {
      for(j=1;j<=u;j++)printf(" ");
        printf("*");
        for(j=1;j<=v;j++)printf(" ");
        printf("*");
        printf("\n");
        u--;
        v+=2;
    }
    for(i=1;i<=t;i++)printf("* ");
    
    return 0;
}