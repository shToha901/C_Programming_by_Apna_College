// CODE FOR:  Calculating cube of a number.

#include <stdio.h>

int main()
{
    // taking input
    int n, cube;
    printf("Enter the integer: ");
    scanf("%d", &n);

    // calculating
    cube = n * n * n;

    // showing result
    printf("Cube of n is: %d", cube);

    return 0;
}