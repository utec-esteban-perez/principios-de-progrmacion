#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tablaMultiplicar(int n) {
    printf("Tabla de multiplicar del %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int esPrimo(int n) {
    int is_prime = 1;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    
    if (is_prime) {
        return 0; // Es primo
    } else {
        return 1; // No es primo
    }
}

int sumaDigitos(int n) {
    int sum = 0;
    int num = n;
    while (num != 0) {     // repite mientras queden digitos
        sum += num % 10;   // extrae el ultimo digito y lo suma
        num /= 10;         // "borra" el último digito
    }
    return sum;
}

void triangulo(int h) {
    int i, j;
    for(i = 1; i <= h; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
            printf("\n");
        }
}
    
int main(void) {
    srand(time(NULL));
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
                tablaMultiplicar(n);
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
                    if (esPrimo(n) == 0) {
                        printf("%d es primo.\n", n);
                    } else {
                        printf("%d no es primo.\n", n);
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
                    printf("La suma de los digitos de %d es: %d\n", n, sumaDigitos(n));
                }
                break;
            case 4:
                printf("Ingrese la altura del triangulo: ");
                if (scanf("%d", &n) != 1) {
                    while (getchar() != '\n');
                    printf("Error: entrada inválida.\n");
                } else{
                    while (getchar() != '\n');
                    
                }
                break;
            case 5:
                char jugar = 's';
                int veces = 5;
                int intento;
                int secreto = rand() % 20 + 1;

                do {
                    veces -= 1;
                    printf("Adivina el número entre 1 y 20: ");
                    if (scanf(" %d", &intento) != 1) {
                        while (getchar() != '\n');
                        printf("Error: entrada inválida.\n\n");
                        continue;
                    }
                    if (intento == secreto) {
                        while (getchar() != '\n');
                        printf("Acertaste!!!\n");
                        return 0;
                    } else {
                        while (getchar() != '\n');
                        printf("No es el número %d \n", intento);
                    }
                    
                    if (veces == 0) {
                        break;
                    }
                    
                    printf("¿Otra? (s/n): ");
                    scanf(" %c", &jugar);
                } while (jugar == 's' || jugar == 'S');
                
                printf("No acertaste esta vez. El número era %d\n", secreto);
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