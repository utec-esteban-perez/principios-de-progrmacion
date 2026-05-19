#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int digito = n % 10;
    printf("El último dígito de %d es: %d\n", n, digito);

    
    return 0;
}