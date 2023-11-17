// CODE FOR: Calculating area of a square.

#include <stdio.h>

int main()
{
    // Taking input of a side
    float side, area;
    printf("Input a side of squar: ");
    scanf("%f", &side);

    // Calculation
    area = side * side;

    // Printing output
    printf("Area of squar is: %.2f", area);

    return 0;
}