#include <stdio.h>

int main() {
    float canh_day, chieu_cao, dien_tich;

    printf("Nhap do d�i canh d�y cua tam gi�c: ");
    scanf("%f", &canh_day);

    printf("Nhap chieu cao cua tam gi�c: ");
    scanf("%f", &chieu_cao);

    dien_tich = 0.5 * canh_day * chieu_cao;

    printf("Dien t�ch cua tam gi�c l�: %.2f\n", dien_tich);

    return 0;
}

