#include <stdio.h>
#include <math.h>

int main()
{
    float a,area,perimeter;
    printf("Enter the value of a = ");
    scanf("%f", &a);
    area=a*a;
    perimeter=4*a;
    printf("The perimeter of this square is= %f\n", perimeter);
    printf("The area of this square is= %f", area);

    return 0;
}
