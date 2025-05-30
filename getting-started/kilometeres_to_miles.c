#define KM_TO_MILES 0.621371
#include <stdio.h>

int main(void)
{
    float km;

    printf("How many kilometers (KM): ");
    scanf("%f", &km);

    float miles = km * KM_TO_MILES;
    printf("%.2f km = %.2f miles\n", km, miles);

    return 0;
}

