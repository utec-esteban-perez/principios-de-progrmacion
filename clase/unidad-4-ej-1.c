#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingrese n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    printf("Suma = %d\n", suma);
    return 0;
}