#include <stdio.h>

int main(void) {
    float precio1, precio2, precio3;
    float propina, descuento;
    int comensales;

    printf("Precio plato 1: ");
    scanf("%f", &precio1);
    printf("Precio plato 2: ");
    scanf("%f", &precio2);
    printf("Precio plato 3: ");
    scanf("%f", &precio3);

    printf("Propina (%%): ");
    scanf("%f", &propina);
    if (propina < 0 || propina > 100) {
        printf("Error: propina debe estar entre 0 y 100.\n");
        return 1;
    }

    printf("Descuento (%%): ");
    scanf("%f", &descuento);
    if (descuento < 0 || descuento > 100) {
        printf("Error: descuento debe estar entre 0 y 100.\n");
        return 1;
    }

    printf("Cantidad de comensales: ");
    scanf("%d", &comensales);
    if (comensales <= 0) {
        printf("Error: debe haber al menos 1 comensal.\n");
        return 1;
    }

    float subtotal = precio1 + precio2 + precio3;
    float con_propina = subtotal * (1 + propina / 100);
    float total = con_propina * (1 - descuento / 100);
    float por_persona = total / comensales;

    printf("\nSubtotal:       $%.2f\n", subtotal);
    printf("Con propina:    $%.2f\n", con_propina);
    printf("Total final:    $%.2f\n", total);
    printf("Por persona:    $%.2f\n", por_persona);

    return 0;
}
