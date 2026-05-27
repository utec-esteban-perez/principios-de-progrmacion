#include <stdio.h>

int main(void) {
    double resultado;
    double a, b;
    char op;

    printf("Ingrese una operacion (ejemplo 2+2): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Error: Ingreso inválido\n");
        return 1;
    }
    
    switch(op) {
        case '+':
            resultado = a + b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (b == 0) {
                printf("Error: División por cero\n");
                return 1;
            }
            resultado = a / b;
            printf("Resultado: %.2lf\n", resultado);
            break;
        default:
            printf("Operación no válida: %c\n", op);
            return 1;
    }
    
    return 0;
}