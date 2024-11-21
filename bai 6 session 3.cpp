#include <stdio.h>

int main() {
    float canh_day, chieu_cao, dien_tich;

    printf("Nhap do dài canh dáy cua tam giác: ");
    scanf("%f", &canh_day);

    printf("Nhap chieu cao cua tam giác: ");
    scanf("%f", &chieu_cao);

    dien_tich = 0.5 * canh_day * chieu_cao;

    printf("Dien tích cua tam giác là: %.2f\n", dien_tich);

    return 0;
}

