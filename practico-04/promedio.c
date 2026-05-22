#include <stdio.h>

int main(void) {
    double numero;
    double suma = 0;
    int cantidad = 0;
    
    while (1) {
        printf("Ingrese un número (o -1 para terminar): ");
        scanf("%lf", &numero);
       
        // Check the -1 and only numbers
        if (numero == -1) {
            break;
        }
        
        suma += numero;
        cantidad++;
        
        double promedio = suma / cantidad;
        printf("%.3lf\n", promedio);
    }
    
    if (cantidad == 0) {
        printf("sin datos\n");
    }
    
    return 0;
}
    