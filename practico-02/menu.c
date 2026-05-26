#include <stdio.h>

int main(void) {
    int option;
    int state = 1;
    int n;
    while (state) {
        printf("\n" );
        printf("-------------------------\n" );
        printf("      MENU PRINCIPAL     \n" );
        printf("-------------------------\n" );
        printf("1 - Tabla de multiplicar\n");
        printf("2 - Es primo?\n");
        printf("3 - Suma de digitos\n");
        printf("4 - Patron triangulo\n");
        printf("5 - Adivinanza\n");
        printf("0 - Salir\n");
        printf("-------------------------\n\n" );
        printf("Ingrese opcion: ");
        if (scanf("%d", &option) != 1) {
            while (getchar() != '\n');
            printf("Error, ingrese un numero.\n");
            continue;
        }

        switch (option) {
            // SALIR
            case 0:
                printf("Saliendo...\n");
                state = 0;
                break;
            // TABLA MULTIPLICAR
            case 1:
                printf("Ingrese un numero del 1 al 12: ");
                scanf("%d", &n);
                if (n < 1 || n > 12) {
                    printf("Error, ingrese un numero del 1 al 12.\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf("Tabla de multiplicar del %d:\n", n);
                for (int i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", n, i, n*i);
                }
                break;
            // ES PRIMO?
            case 2:
                printf("Ingrese un numero positivo mayor a 1: ");
                if (scanf("%d", &n) != 1) {
                    while (getchar() != '\n');
                    printf("Error: entrada inválida.\n");
                // Verifica que el número no es 1, 0 o negativo
                } else if (n < 2) {
                    while (getchar() != '\n');
                    printf("Debe ingresar un numero mayor o igual a 2.\n");
                } else {
                    while (getchar() != '\n');
                    int is_prime = 1;
                    int divisor = 0;
                    
                    for (int i = 2; i * i <= n; i++) {
                        if (n % i == 0) {
                            is_prime = 0;
                            divisor = i;
                            break;
                        }
                    }
                    
                    if (is_prime) {
                        printf("%d es PRIMO.\n", n);
                    } else {
                        printf("%d NO es primo (primer divisor: %d).\n", n, divisor);
                    }
                }
                break;
            // SUMA DE DIGITOS
            case 3:
                printf("Ingrese un numero: ");
                if (scanf("%d", &n) != 1) {
                    while (getchar() != '\n');
                    printf("Error: entrada inválida.\n");
                } else {
                    while (getchar() != '\n');
                    int sum = 0;
                    int num = n;
                    while (num != 0) {     // repite mientras queden dígitos
                        sum += num % 10;   // extrae el último dígito y lo suma
                        num /= 10;         // "borra" el último dígito
                    }
                    printf("La suma de los digitos de %d es: %d\n", n, sum);
                }
                break;
            case 4:
                printf("Ingrese la altura del triangulo: ");
                if (scanf("%d", &n) != 1) {
                    while (getchar() != '\n');
                    printf("Error: entrada inválida.\n");
                } else{
                    while (getchar() != '\n');
                    for 
                    // base
                    for (int i = 0; i < 2*n-1; i++) {
                        printf("*");
                    }
                }
                break;
            case 5:
                // adivinanza
                break;
            default:
                printf("Opcion invalida. Ingrese un numero entre el 0-5.\n");
                break;
        }

        // if (opcion == 0) {
        //     printf("Saliendo...\n");
        //     state = 0;
        // } else if (opcion == 1) {

        // } else if (opcion == 2) {

        // } else if (opcion == 3) {
        //     // suma de digitos
        // } else if (opcion == 4) {
        //     // patron triangulo
        // } else if (opcion == 5) {
        //     // adivinanza
        // } else {
        //     printf("Opcion invalida. Ingrse un numero entre el 0-5.\n");
        // }
    }
}