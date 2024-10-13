#include <stdio.h>

int main() {
    // Inicialización de los arreglos
    int arr[5] = {1, 2, 3, 4, 5};
    char str[11] = "hola mundo";  // Ajuste del tamaño para incluir la longitud correcta de la cadena con el carácter nulo al final
    char str2[6];  // Declaración correcta del tamaño del arreglo

    // Asignación de caracteres a str2
    str2[0] = 'A';
    str2[1] = 'd';
    str2[2] = 'i';
    str2[3] = '6';
    str2[4] = 's';
    str2[5] = '\0';  // Caracter nulo para finalizar el string

    // Recorrido del arreglo arr usando un ciclo
    printf("[");
    for (int i = 0; i < 5; i++) {  // Declaración de la variable i en el for
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    // Recorrido del arreglo str usando un ciclo
    printf("[");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("]\n");

    // Recorrido del arreglo str2 usando un ciclo
    printf("[");
    for (int i = 0; str2[i] != '\0'; i++) {
        printf("%c", str2[i]);
    }
    printf("]\n");

    return 0;
}