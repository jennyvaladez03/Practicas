#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){

    int temp = *a; //Guarda el valor de la variable a la que apunta "a" en una variable temporal//
    *a = *b;  //Asigna el valor de "b" al lugar de "a"//
    *b = temp;  //Asigna el valor original de "a" (que estaba guardado en temp) al lugar de "b"//
}

int longitudCadena(char *cadena){
    int longitud = 0;
    char *ptr = cadena; //Creamos un puntero para recorrer la cadena sin tocar el original//
    
    while (*ptr != '\0'){ //Recorre la cadena hasta que el valor en el que apunta "ptr" sea el caracter de cero//
        longitud++; //Incrementa el contador de longitud//
        ptr++; //Mueve el puntero a la siguiente posicion//
    }
    return longitud;
}

void invertirArreglo(int *arr, int size){
    
    int *inicio = arr; //Puntero al inicio del arreglo//
    int *final = arr + size - 1; //Puntero al final del arreglo menos uno//

    while (inicio < final){ //Intercambia hasta que el puntero de inicio este antes del final//
        int temp = *inicio; //Guarda el valor de inicio la que apunta en una variable temporal//
        *inicio = *final;   //El valor apuntado por inicio toma el valor apuntado por final//
        *final = temp;      //El valor apuntado por final toma el valor original de inicio guardado en la variable temporal//
        
        inicio++; //Aumenta la posicion a la derecha//
        final--;  //Disminuye posicion a la izquierda//
    }
}

int cuentaPares(int *arr, int size){
    int contador_pares = 0;
    int *ptr_actual = arr; //Puntero auxiliar para recorrer el arreglo//
    int *fin_arr = arr + size; //Puntero que marca el final del arreglo en una posición después del último elemento//

    while (ptr_actual < fin_arr){ //Recorre el arreglo desde el inicio hasta que el puntero auxiliar llegue al final//
        
        if ((*ptr_actual) % 2 == 0){ //Verificar si el valor al que apunta es par//
            contador_pares++; //Incrementa el contador si es par//
        }
        ptr_actual++; //Mueve el puntero a la siguiente posicion del arreglo//
    }
    return contador_pares;
}


