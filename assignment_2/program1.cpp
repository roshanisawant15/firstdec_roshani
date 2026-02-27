#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    
    if (op == '+') {
        printf("Result = %d", a + b);
    }
    else if (op == '-') {
        printf("Result = %d", a - b);
    }
    else if (op == '*') {
        printf("Result = %d", a * b);
    }
    else if (op == '/') {
        if (b != 0)
            printf("Result = %d", a / b);
        else
            printf("Division by zero is not allowed");
    }
    else if (op == '%') {
        if (b != 0)
            printf("Result = %d", a % b);
        else
            printf("Modulus by zero is not allowed");
    }
    else {
        printf("Invalid operator");
    }

    return 0;
}
