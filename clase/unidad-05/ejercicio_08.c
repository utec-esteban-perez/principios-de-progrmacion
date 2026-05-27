#include <stdio.h>

int main(void) {
    int input = 1;
    int cantidad = 0;
    int datos[100] = {0};

    printf("Ingrese numeros (0 termina):\n");
    while (input != 0) {
        printf("> ");
        if (scanf("%d", &input) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida.\n");
            continue;
        }
        if (input == 0 || cantidad > 100) break;

        datos[cantidad] = input;
        cantidad++;
    }
    printf("\nNumeros ingresados:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d\n", datos[i]);
    }
}