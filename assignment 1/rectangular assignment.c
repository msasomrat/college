#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, area, perimeter;
    printf("Enter the value of a and b = ");
    scanf("%f%f", &a, &b);
    area=a*b;
    perimeter=2*(a+b);
    printf("The perimeter of this rectangular is= %f\n", perimeter);
    printf("The area of this rectangular is= %f", area);

    return 0;
}
