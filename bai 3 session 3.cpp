#include <stdio.h>

#define PI 3.14159  

int main() {
    float r, chu_vi, dien_tich;

    printf("Nhap b�n k�nh h�nh tr�n: ");
    scanf("%f", &r);

    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;

    printf("Chu vi h�nh tr�n: %.2f\n", chu_vi);
    printf("Di?n t�ch h�nh tr�n: %.2f\n", dien_tich);

    return 0;
}

