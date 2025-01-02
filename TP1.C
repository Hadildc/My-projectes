#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // نطلعلو من المستخدسم يدخل عملية لي حابها 
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // هذي باش نمدولو نتيجة برك لواش كان حاب ...وحدة من العمليات فقط 
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // نتأكدو بلي المقام ماشي 0 باش نقسمو
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
//هذي في حالة مدخلش عملية
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}