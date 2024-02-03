#include <stdio.h>
#include <math.h>

long long convert2(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}
int convert1(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
int main(){
    int i,b,a,d;
    printf("Enter 0 to convert binary to decimal & 1 to convert decimal to binary ");
    scanf("%d", &i);
    
    if (i==0)
    {
        printf("Enter the binary value");
        scanf("%d", &b);
       a=convert1(b);
    }


    if (i==1)
    {
        printf("Enter the decimal value");
        scanf("%d", &d);
       a=convert2(d);
    }
    printf("%d", a);
}