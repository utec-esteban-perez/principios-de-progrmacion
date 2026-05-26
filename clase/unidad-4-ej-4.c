#include <stdio.h>

int main() {
    int n, sum, digit;
    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    while (n >= 10) {
        sum = 0;
        printf("Sumando los dígitos de %d: ", n);
        
        while (n > 0) {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        
        printf("%d\n", sum);
        n = sum;
    }

    printf("La raíz digital es: %d\n", n);
    return 0;
}