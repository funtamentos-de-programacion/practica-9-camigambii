#include <stdio.h>

// TODO: (10) Declarar un prototipo de una función
// id: suma
// tipo de retorno: int
// argumento: un apuntador a entero y un entero
int suma(int*, int);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // TODO: (11) Crea una variable llamada resultado y asigna lo que devuelve la función suma
    // pasa a la función el arreglo y su tamaño
    int resultado = suma(arr, 5);

    // TODO: (12) Imprime el resultado
    printf("La suma de los elementos del arreglo es: %d\n", resultado);

    return 0;
}

// TODO: (13) Crea la función suma que realiza la suma de todos los elementos de un arreglo
int suma(int* arr, int tam) {
    int total = 0;
    for (int i = 0; i < tam; i++) {
        total += arr[i];
    }
    return total;
}
