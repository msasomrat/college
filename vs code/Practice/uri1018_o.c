#include <stdio.h>


 int main(){
    float i;
    int s;

    scanf("%f", &i); 
   s=i;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", s/100);
    s = (s%100);

    printf("%d nota(s) de R$ 50,00\n", s/50);
    s = (s%50);

    printf("%d nota(s) de R$ 20,00\n", s/20);                                                                                                                        
    s = (s%20);

    printf("%d nota(s) de R$ 10,00\n", s/10);
    s = (s%10);

    printf("%d nota(s) de R$ 5,00\n", s/5);
    s = (s%5);

    printf("%d nota(s) de R$ 2,00\n", s/2);
    s = (s%2);
    printf("MOEDAS:\n");
    printf("%d nota(s) de R$ 1,00\n", s/1);

    s=(i*100);
    s=s%100;
    printf("%d nota(s) de R$ 50,00\n", s/50);
    s = (s%50);

    printf("%d nota(s) de R$ 20,00\n", s/25);                                                                                                                        
    s = (s%25);

    printf("%d nota(s) de R$ 10,00\n", s/10);
    s = (s%10);

    printf("%d nota(s) de R$ 5,00\n", s/5);
    s = (s%5);

    printf("%d nota(s) de R$ 1,00\n", s/1);
    return 0;
    
 }