#include <stdio.h>
#include <stdlib.h>

//Funciones//
void swap(int *a, int *b);
int longitudCadena ( char *cadena);
void invertirArreglo (int *arr , int size);
int cuentaPares (int *arr , int size);

 void main(){

    printf("PRUEBA 1: Funcion swap\n"); // Caso Correcto//
    int a = 5;
    int b = 10;
    printf("Caso 1: Antes swap a=%d, b=%d\n", a, b); 
    swap(&a, &b); 
    printf("Caso 1: Despues swap a=%d, b=%d\n", a, b); 

    int c = 20; //Caso Incorrecto//
    int d = 0;
    printf("Caso 2: Antes swap c=%d, d=%d\n", c, d);
    swap(&c, &d);
    printf("Caso 2: Despues swap c=%d, d=%d\n", c, d); // Debe ser c=0, d=20

    printf("PRUEBA 2: Funcion longitudCadena\n");
    
    // Caso Correcto//
    char cadena1[] = "Ingenieria del Software";
    int len1 = longitudCadena(cadena1);
    printf("Caso 1: Cadena: '%s' | Longitud esperada: 23 | Longitud calculada: %d\n", cadena1, len1);

    // Cadena vacía (solo '\0')//
    char cadena2[] = ""; 
    int len2 = longitudCadena(cadena2);
    printf("Caso 2: Cadena: '%s' | Longitud esperada: 0 | Longitud calculada: %d\n", cadena2, len2);
    
    printf("PRUEBA 3: Funcion invertirArreglo\n");
    
    // Caso Correcto//
    int arr_par[] = {10, 20, 30, 40, 50, 60};
    int size_par = 6;
    printf("Caso 1: Arreglo original: {10, 20, 30, 40, 50, 60}\n");
    invertirArreglo(arr_par, size_par);
    printf("Caso 1: Arreglo invertido: {");
    for (int i = 0; i < size_par; i++) {
        printf("%d%s", arr_par[i], (i == size_par - 1) ? "" : ", ");
    }
    printf("}\n"); // Debe ser {60, 50, 40, 30, 20, 10}//

    // Caso Correcto: Arreglo con número impar //
    int arr_impar[] = {1, 2, 3, 4, 5};
    int size_impar = 5;
    printf("Caso 2: Arreglo original: {1, 2, 3, 4, 5}\n");
    invertirArreglo(arr_impar, size_impar);
    printf("Caso 2: Arreglo invertido: {");
    for (int i = 0; i < size_impar; i++) {
        printf("%d%s", arr_impar[i], (i == size_impar - 1) ? "" : ", ");
    }
    printf("}\n"); // Debe ser {5, 4, 3, 2, 1}//
    
    printf("PRUEBA 4: Funcion cuentaPares\n");
    
    // Caso Correcto: Arreglo con pares e impares, incluyendo ceros y negativos//
    int arr_mix[] = {1, 2, 3, 4, 5, 0, -2, 7};
    int size_mix = 8;
    int pares_mix = cuentaPares(arr_mix, size_mix);
    printf("Caso 1: Arreglo: {1, 2, 3, 4, 5, 0, -2, 7} | Pares esperados: 4 | Pares encontrados: %d\n", pares_mix); 

    // Caso Arreglo sin pares//
    int arr_impares[] = {1, 3, 5, 7, 9};
    int size_impares = 5;
    int pares_impares = cuentaPares(arr_impares, size_impares);
    printf("Caso 2: Arreglo: {1, 3, 5, 7, 9} | Pares esperados: 0 | Pares encontrados: %d\n", pares_impares); 
 }


