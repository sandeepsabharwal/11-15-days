# Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char op;
    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to consume newline
    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+': result = a + b; printf("Result: %d\n", result); break;
        case '-': result = a - b; printf("Result: %d\n", result); break;
        case '*': result = a * b; printf("Result: %d\n", result); break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0)
                result = a % b;
            else
                printf("Error: Modulo by zero\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
