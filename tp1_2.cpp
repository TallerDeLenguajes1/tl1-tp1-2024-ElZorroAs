#include <stdio.h>

// Función que devuelve el cuadrado de un número
int Cuadrado(int num) {
    return num * num;
}

// Función que devuelve el cuadrado de un número, pero devuelve void
void Cuadrado_void(int num) {
    printf("El cuadrado de %d es: %d\n", num, num * num);
}
// ptr es puntero
// Función que muestra la dirección y el contenido de una variable
void MostrarDireccionContenido(int *ptr) {
    printf("Dirección de la variable: %p, Contenido de la variable: %d\n", ptr, *ptr);
}

// Función que intercambia los valores de dos variables
void Invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función que ordena dos valores y los devuelve en orden ascendente
void Orden(int *a, int *b) {
    if (*a > *b) {
        Invertir(a, b); // Llamada a la función Invertir para intercambiar los valores
    }
}

int main() {
    int num1, num2;

    // Pedir al usuario que ingrese dos números
    printf("Ingrese dos numeros separados por espacio: ");
    scanf("%d %d", &num1, &num2);

    // Mostrar los números ingresados
    printf("Números ingresados: %d y %d\n", num1, num2);

    // Llamar a la función para mostrar dirección y contenido de las variables
    MostrarDireccionContenido(&num1);
    MostrarDireccionContenido(&num2);

    // Llamar a la función para invertir los valores de las variables
    Invertir(&num1, &num2);

    // Mostrar los números invertidos
    printf("Numeros invertidos: %d y %d\n", num1, num2);

    // Llamar a la función para ordenar los números
    Orden(&num1, &num2);

    // Mostrar los números ordenados
    printf("Numeros ordenados: %d y %d\n", num1, num2);

    // Llamar a la función para calcular el cuadrado de un número, pero devuelve void
    Cuadrado_void(num1);
    Cuadrado_void(num2);

    return 0;
}
