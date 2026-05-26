#include <stdio.h>

int main(void) {
    double peso, altura, imc;
    char *categoria;

    printf("Ingresa peso (kg): ");
    scanf("%lf", &peso);

    if (peso < 1) {
        printf("El peso no puede ser menor o igual a 0\n");
        return 1;
    }

    printf("Ingresa altura (m): ");
    scanf("%lf", &altura);

    if (altura < 1) {
        printf("La altura no puede ser menor o igual a 0\n");
        return 1;
    }

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        categoria = "Bajo";
    } else if (imc < 25) {
        categoria = "Normal";
    } else if (imc < 30) {
        categoria = "Sobrepeso";
    } else {
        categoria = "Obesidad";
    }

    printf("\nIMC: %.2f\n", imc);
    printf("Categoría: %s\n", categoria);

    return 0;
}
