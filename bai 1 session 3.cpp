#include <stdio.h>

int main() {
    char name[100];  

    printf("Nhap t�n cua ban: ");
    fgets(name, sizeof(name), stdin);  

    printf("Xin ch�o %s", name);

    return 0;
}

