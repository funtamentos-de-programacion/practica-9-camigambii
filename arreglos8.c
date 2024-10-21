#include <stdio.h>

// Prototipo de las funciones
int suma(int a[3][3], int f);
int suma2(int a[3][3], int f, int c);

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int res = suma(arr, 3);
    int *ptr = &res;
    printf("%d\n", *ptr);
    res = suma2(arr, 3, 3);
    printf("%d\n", *ptr);

    return 0;
}

// Función suma para arreglos bidimensionales
int suma(int a[3][3], int f) {
    int r = 0;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < 3; j++) {
            r += a[i][j];
        }
    }
    return r;
}

// Función suma2 para arreglos bidimensionales
int suma2(int a[3][3], int f, int c) {
    int r = 0;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            r += a[i][j];
        }
    }
    return r;
}
