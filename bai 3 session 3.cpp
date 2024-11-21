#include <stdio.h>

#define PI 3.14159  

int main() {
    float r, chu_vi, dien_tich;

    printf("Nhap bán kính hình tròn: ");
    scanf("%f", &r);

    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;

    printf("Chu vi hình tròn: %.2f\n", chu_vi);
    printf("Di?n tích hình tròn: %.2f\n", dien_tich);

    return 0;
}

