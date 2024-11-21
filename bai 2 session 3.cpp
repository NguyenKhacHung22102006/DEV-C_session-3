#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f d0 Celsius tuong duong voi %.2f d? Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

