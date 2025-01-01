#include <stdio.h>

int main() {
    float a, b, c, discriminant;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("أEnter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    discriminant = b * b - 4 * a * c;
    printf("The value of the discriminant is:%.2f\n", discriminant);
    if (discriminant > 0) {
        printf("The equation has real and distinct roots.\n");
    } else if (discriminant == 0) {
        printf("The equation has one real root.\n");
    } else {
        printf("The equation has unreal (imaginary) roots.\n");
    }

    return 0;
}
