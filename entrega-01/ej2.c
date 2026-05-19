#include <stdio.h>

#define ARS_TO_USD 0.000716
#define ARS_TO_UYU 0.0286
#define USD_TO_ARS 1396.0
#define USD_TO_UYU 40.0
#define UYU_TO_ARS 34.9
#define UYU_TO_USD 0.0249

int main(void) {
    double monto;
    char moneda;

    printf("Monto: ");
    scanf("%lf", &monto);
    printf("Moneda (A=ARS, U=UYU, D=USD): ");
    scanf(" %c", &moneda);

    switch (moneda) {
        case 'A':
            printf("USD: %.2f\n", monto * ARS_TO_USD);
            printf("UYU: %.2f\n", monto * ARS_TO_UYU);
            break;
        case 'U':
            printf("ARS: %.2f\n", monto * UYU_TO_ARS);
            printf("USD: %.2f\n", monto * UYU_TO_USD);
            break;
        case 'D':
            printf("ARS: %.2f\n", monto * USD_TO_ARS);
            printf("UYU: %.2f\n", monto * USD_TO_UYU);
            break;
        default:
            printf("Moneda invalida.\n");
            return 1;
    }

    return 0;
}
