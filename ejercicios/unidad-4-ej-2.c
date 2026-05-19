#include <stdio.h>

int main() {
    int n;
    int arr[100] = {0};
    int total, suma, promedio, max, min;

    printf("Ingrese n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Sin datos\n");
        return 0;
    } else {
        arr[n]++; // incrementa el contador para el número ingresado
    }

    while (n != 0)
    {
        printf("Ingrese otro valor o 0 para terminar: ");
        scanf("%d", &n);
        if (n != 0) {
            arr[n]++; // incrementa el contador para el número ingresado
        }
    }

    for (int i = 0; i < 100; i++) {
        if (arr[i] > 0) {
            // Total de números ingresados
            total += 1;
            suma += i * arr[i]; // Suma de todos los números ingresados
            if (min > i || min == 0) {
                min = i; // Actualiza el mínimo
            }
            if (max < i) {
                max = i; // Actualiza el máximo
            }
        }
    }

    promedio = suma / total;
    printf("Contador: %d\n", total);
    printf("Suma total: %d\n", suma);
    printf("Promedio: %d\n", promedio);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
    