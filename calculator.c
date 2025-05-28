#include <stdio.h>

int main(void)
{
    char operator;
    float value_1, value_2;

    printf("Choose either '+' or '-' or '/' or '*': ");
    scanf(" %c", &operator);  // Added space before %c
    printf("Value 1: ");
    scanf("%f", &value_1);
    printf("Value 2: ");
    scanf("%f", &value_2);

    switch (operator)
    {
        case '+':
            printf("%f + %f = %f\n", value_1, value_2, value_1 + value_2);
            break;
        case '-':
            printf("%f - %f = %f\n", value_1, value_2, value_1 - value_2);
            break;
        case '/':
            if (value_2 == 0)
            {
                printf("Division by zero!\n");
                return -1;
            }
            else
            {
                printf("%f / %f = %f\n", value_1, value_2, value_1 / value_2);
            }
            break;  // Added break here
        case '*':
            printf("%f * %f = %f\n", value_1, value_2, value_1 * value_2);
            break;
        default:
            printf("Invalid operator.\n");
            return -1;
    }

    return 0;
}

