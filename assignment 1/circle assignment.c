#include <stdio.h>
#include <math.h>

int main()
{
    float a,area,perimeter;
    printf("Enter the value of a = ");
    scanf("%f", &a);
    area=3.1416*a*a;
    perimeter=2*3.1416*a;
    printf("The perimeter of this circle is= %f\n", perimeter);
    printf("The area of this circle is= %f", area);

    return 0;
}
