// CODE FOR: Calculating parameter of a rectangle.

#include <stdio.h>

int main()
{
    // takinh input
    float length, width, parameter;
    printf("enter length and width respectively: ");
    scanf("%f %f", &length, &width);

    // Calculaton
    parameter = 2 * (length + width);

    // calculating and printing
    printf("Parameter of rectangle is: %.2f", parameter);

    return 0;
}