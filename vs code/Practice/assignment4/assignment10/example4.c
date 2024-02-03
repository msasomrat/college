#include<stdio.h>
#include<math.h>
int prime(int a, int b){
    int i,j,h;
    for ( i = a; i <= b; i++)
    {
        h=0;
        for ( j = 2; j <=sqrt(i); j++)
        {
            if (i%j==0)
            {
                h=1;
                break;
            }
            
        }
        if (h==0)
        {
            printf("%d ",i);
        }
        
    }
    
}
int main(){
    prime(2, 100);
}