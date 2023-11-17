// CODE FOR: Calculating area of a Circle.

#include <stdio.h>

int main()
{
    float radius, area, PI = 3.1416;

    // Taking input
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Calculation
    area = PI * radius * radius;

    // printing area (calculation is at the last)
    printf("Area of circle is: %.2f", area);

    return 0;
}