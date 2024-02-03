#include <stdio.h>

int main() {

  char name[10];
  double a,b,s;
  scanf("%c", name);
  scanf("%lf%lf", &a, &b);
  s=a+b*.15;
  printf(" TOTAL = R$ %.2lf\n", s);

    return 0;
}
