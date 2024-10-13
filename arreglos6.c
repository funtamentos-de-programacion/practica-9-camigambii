#include <stdio.h>

int main() {
    // TODO: (17) Asigna los valores del 1 al 9 para rellenar la matriz de 3x3
    int arr[3][3];
    
    int valor = 1; // Variable para ir llenando la matriz con los valores del 1 al 9
    
    // Acceso usando índices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // TODO: (18) Usa i y j para acceder a los elementos de la matriz
            arr[i][j] = valor;
            valor++; // Incrementar el valor para el siguiente elemento
        }
    }

    // Imprimir la matriz para verificar los valores
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
