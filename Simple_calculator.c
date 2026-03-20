#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %f\n", a + b);
    printf("Difference = %f\n", a - b);
    printf("Product = %f\n", a * b);
    printf("Division = %f\n", a / b);

    return 0;
}
