#include <stdio.h>

int main() {
    int n;

    do {
        printf("Ingrese un número entre 1 y 12: ");
        scanf("%d", &n);
    } while (n < 1 || n > 12);

    printf("Tabla del %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%3d x %2d = %4d\n", n, i, n * i);
    }

    return 0;
}