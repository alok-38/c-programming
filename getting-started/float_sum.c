#include <stdio.h>

int main(void)
{
    float value_1, value_2, value_3, sum;

    printf("Enter three floating values seperated by spaces: ");
    scanf("%f %f %f", &value_1, &value_2, &value_3);

    sum = value_1 + value_2 + value_3;

    printf("%.2f + %.2f + %.2f = %.2f\n", value_1, value_2, value_3, sum);

    return 0;
}

