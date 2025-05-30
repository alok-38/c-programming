#define PI 3.14159
#include <stdio.h>

int main(void)
{
    float radius = 0;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    float area = PI * radius * radius;

    printf("Area of the circle with radius %.2f = %.2f\n", radius, area);

    return 0;
}

