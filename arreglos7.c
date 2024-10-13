#include <stdio.h>

int main() {
    // TODO: (19) Asigna los valores del 1 al 9 para rellenar la matriz de 3x3
    int arr[3][3];

    // TODO: (20) Crea un apuntador que apunte al primer elemento de la matriz
    int *ptr = &arr[0][0];
    
    int valor = 1;  // Variable para llenar la matriz con valores del 1 al 9

    // Acceso usando índices y apuntadores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // TODO: (21) Usa la lógica de apuntadores para acceder al arreglo
            *(ptr + i * 3 + j) = valor;  // Acceder a cada elemento usando el apuntador
            valor++;
        }
    }

    // Mostrar la matriz para verificar que se rellenó correctamente
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
