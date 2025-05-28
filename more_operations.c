#include <stdio.h>
#include <math.h>  // For pow()

void showMenu() {
    printf("\nChoose an operation:\n");
    printf(" + : Addition\n");
    printf(" - : Subtraction\n");
    printf(" * : Multiplication\n");
    printf(" / : Division\n");
    printf(" %% : Modulus\n");  // Double %% to print a literal %
    printf(" ^ : Power\n");
    printf(" q : Quit\n");
}

int main() {
    double num1, num2, result;
    char op;
    int int1, int2;
    int running = 1;

    while (running) {
        showMenu();

        printf("Enter operator: ");
        scanf(" %c", &op);

        if (op == 'q' || op == 'Q') {
            running = 0;
            break;
        }

        if (op == '%') {
            printf("Enter two integers: ");
            scanf("%d %d", &int1, &int2);
            if (int2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                printf("Result: %d\n", int1 % int2);
            }
        } else {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            switch (op) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0)
                        result = num1 / num2;
                    else {
                        printf("Error: Division by zero.\n");
                        continue;
                    }
                    break;
                case '^':
                    result = pow(num1, num2);
                    break;
                default:
                    printf("Error: Invalid operator.\n");
                    continue;
            }
            printf("Result: %.2lf\n", result);
        }
    }

    printf("Goodbye!\n");
    return 0;
}

