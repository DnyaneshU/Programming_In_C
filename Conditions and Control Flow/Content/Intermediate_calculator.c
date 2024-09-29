#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator and numbers
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on the operator
    switch(operator) {
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
            if(num2 == 0)
            printf("Error! Division not possible by zero.\n");
            else 
                printf("%d%c%d=%d\n", num1, operator,num2,num1/num2);
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    // Output the result
    printf("Result: %lf\n", result);

    return 0;
}
