#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    char jugar = 's';
    int intento, veces;
    int secreto = rand() % 100 + 1;

    do {
        printf("Adivina el número entre 1 y 100: ");
        scanf(" %d", &intento);
        if (intento == secreto) {
            printf("Acertaste!!!\n");
            return 0;
        } else {
            printf("No es el número %d \n", intento);
        }

        veces = veces + 1;
        if (veces > 6) {
            break;
        }
        
        printf("¿Otra? (s/n): ");
        scanf(" %c", &jugar);
    } while (jugar == 's');
    
    printf("No acertaste esta vez. El número era %d\n", secreto);
    
    return 0;
}