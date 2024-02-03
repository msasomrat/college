#include<stdio.h>
int main()
{
    float a, b, c,d,e,s,p;
    scanf("%f%f%f%f", &a,&b,&c,&d);
    s=(a*2+b*3+c*4+d)/10;
    printf("Media: %.1f\n", s);
    if (s>5.0&&s<=6.9)
    {
         printf("Aluno em exame.\n");
        scanf("%f", &e);
        p=(s+e)/2;
         printf("Nota do exame: %.1f\n", e);
         if (p>=5.0)
         {
             printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",p);
         }
         else if (p<=4.9)
         {
            printf("Media final: %.1f\n",p);
         }
         
         
    }
    else if (s>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
     else if (s<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    
    
return 0;
}