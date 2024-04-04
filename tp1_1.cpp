#include <stdio.h>
int main()
{
    printf("Hola mundo XD \n");

    // Declarar una variable de algún tipo
    int x = 10;

    // Declarar un puntero que apunta a la variable x
    int *ptr = &x;

    // Mostrar la información solicitada
    printf("1) Contenido del puntero: %d\n", *ptr);
    printf("2) Direccion de memoria almacenada por el puntero: %p\n", ptr);
    printf("3) Direccion de memoria de la variable: %p\n", &x);
    printf("4) Direccion de memoria del puntero: %p\n", &ptr);
    printf("5) Tamanio de memoria utilizado por esa variable: %zu bytes\n", sizeof(x));

    return 0;
}