#include <stdio.h>

int main() {
    float a, b, c, discriminant;

    // طلب إدخال القيم من المستخدم
    printf("أدخل قيمة a: ");
    scanf("%f", &a);
    printf("أدخل قيمة b: ");
    scanf("%f", &b);
    printf("أدخل قيمة c: ");
    scanf("%f", &c);

    // حساب المميز
    discriminant = b * b - 4 * a * c;

    // طباعة قيمة المميز
    printf("قيمة المميز هي: %.2f\n", discriminant);

    // تحديد طبيعة الجذور بناءً على المميز
    if (discriminant > 0) {
        printf("للمعادلة جذور حقيقية ومختلفة.\n");
    } else if (discriminant == 0) {
        printf("للمعادلة جذر حقيقي واحد.\n");
    } else {
        printf("للمعادلة جذور غير حقيقية (خيالية).\n");
    }

    return 0;
}
