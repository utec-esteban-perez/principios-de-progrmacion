#include <stdio.h>

int main() {
    int n;
    printf("Ingresa un número (0-255): ");
    scanf("%d", &n);

    if (n < 0 || n > 255) {
        printf("Número fuera de rango\n");
        return 1;
    }

    // 8 bits
    printf("Binario:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");

    // Hexadecimal
    printf("Hex:      0x%02X\n", n);

    // ASCII
    if (n >= 32 && n <= 126) {
        printf("ASCII:    '%c'\n", n);
    } else {
        printf("ASCII:    (sin carácter imprimible)\n");
    }

    return 0;
}