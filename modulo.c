/************************************************
*   Universidad Sergio Arboleda                 *
*   Computacion Paralela y Distribuida          *
*   Ejercicio: Compilacion por Separado         *
*   Presentado por: Miguel Salazar di Colloredo *
*************************************************/

#include "interfaz.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Esta biblioteca se usa para la generación de una semilla para los números aleatorios.
#include <time.h> 

// |--------------------------------------------------------|
// | Funciones Genéricas (se utilizan en varios programas). |
// | -------------------------------------------------------|

//Función para imprimir matrices
void imprimirMatriz(int N, int matriz[N][N]){
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(matriz[i][j] >= 0){
                printf(" %d\t", matriz[i][j]);
            }
            else{
                printf("%d\t", matriz[i][j]);
            }
            
        }
        printf("\n");
    }    
}

//  |-----------|
//  | PROGRAMAS |
//  |---------- |

// 1. Programa que calcula el producto de dos enteros.
void producto(){
    int a = 0;
    int b = 0;

    printf("Por favor ingrese el primer número entero: ");
    scanf("%d", &a);
    printf("Por favor ingrese el segundo número entero: ");
    scanf("%d", &b);

    int p = a * b;
    printf("Resultado: \n");
    printf("El producto de %d y %d es igual a: %d\n", a, b, p);
}

// 2. Programa que convierte los dias especificados en años, semanas y días.
void aniosSemanasDias(){
    int dias = 0;
    printf("Por favor ingrese el número de días: ");
    scanf("%d", &dias);

    int anios = dias/365;
    int resto = dias % 365;
    int semanas = resto / 7;
    resto = resto % 7;
    printf("\nResultado: \n");
    printf("\tAnios   = %d \n\tSemanas = %d \n\tDias    = %d \n", anios, semanas, resto);
}

// 3. Programa que calcula la distancia entre dos puntos.
void distancia(){

    float x1, y1, x2, y2;

    printf("Por favor ingrese el valor de x1: ");
    scanf("%f", &x1);
    printf("Por favor ingrese el valor de y1: ");
    scanf("%f", &y1);
    printf("Por favor ingrese el valor de x2: ");
    scanf("%f", &x2);
    printf("Por favor ingrese el valor de y2: ");
    scanf("%f", &y2);

    float distancia = sqrt( pow((x2-x1),2) + pow((y2-y1),2) );
    printf("\nResultado: \n");
    printf("\nLa distancia entre los puntos es: %.4f \n", distancia);
}

// 4. Programa que imprime los primeros diez numeros naturales.
void numNaturales(){
    printf("\nResultado: \n");

    for (int i = 0; i < 10; i++){
        printf("\t%d", (i+1));
    }
    printf("\n");
    
}

// 5. Programa que muestra como patron un triangulo rectangulo usando un asterisco
void trianguloAsteriscos(){

    int n;

    printf("Por favor ingrese la altura del triángulo (menor a 14): ");
    scanf("%d", &n);

    if(n > 14){
        printf("Valor errado!Reinicie el programa.\n");
    }
    else{
        printf("\nResultado: \n");
        char string[14] = "*";

        for (int i = 0; i < n; i++){
            
            printf("%s\n", string);
            strcat(string, "*");
        }  
        printf("\n");
    }    
}

// 6. Programa que imprime una matriz de "1", de tamanio N x N

void matrizUnos(){

    int n;
    printf("Por favor ingrese el tamaño de la matriz: (menor a 8): ");
    scanf("%d", &n);

    if(n > 8){
        printf("Valor errado! Reinicie el programa.\n");
    }

    else{
        printf("\nResultado: \n");
        int matriz[n][n];

        for (int i = 0; i < n; i++){
            
            for (int j = 0; j < n; j++){
                matriz[i][j] = 1;
                printf("\t%d", matriz[i][j]);
            }

            printf("\n");    
        }
    }

}

// 7. Programa que imprime una matriz de numeros aleatorios enteros,
// entre 0 y 9, de tamanio N x N.
void matrizRandom(){

    int n;
    printf("Por favor ingrese el tamaño de la matriz: (menor a 8): ");
    scanf("%d", &n);
    
    if(n > 8){
        printf("Valor errado! Reinicie el programa.\n");
    }

    else{

        srand(time(NULL)); //Semilla random
        int matriz[n][n];
        printf("\nResultado: \n");
        
        for(int i = 0; i < n; i++){   
            for(int j = 0; j < n; j++){

                matriz[i][j] = rand() % 10;
                printf("\t%d", matriz[i][j]);
            }
            printf("\n");
        }
    }
}

// 8. Programa que genera dos matrices aleatorias de tamanio N x N, las suma y
// presenta el resultado.

void sumaMatricesRandom(){

    int n;
    printf("Por favor ingrese el tamaño de las matrices (menor a 8): ");
    scanf("%d", &n);

    if(n > 8){
        printf("Valor errado! Reinicie el programa.\n");
    }

    else{

        int matrizA[n][n];
        int matrizB[n][n];
        int matrizC[n][n];
        printf("\nResultado: \n");

        srand(time(NULL)); //Semilla random
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){

                matrizA[i][j] = rand() % 10;
                matrizB[i][j] = rand() % 10;
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }

        printf("Matriz 1: \n");
        imprimirMatriz(n, matrizA);
        printf("\n");
        printf("Matriz 2: \n");
        imprimirMatriz(n, matrizB);
        printf("\n");
        printf("Resultado de la suma: \n");
        imprimirMatriz(n, matrizC);
    }
}

// 9. Programa que genera dos matrices aleatorias de tamanio N x N, las resta y
// presenta el resultado.

void restaMatricesRandom(){

    int n;
    printf("Por favor ingrese el tamaño de las matrices (menor a 8): ");
    scanf("%d", &n);

    if(n > 8){
        printf("Valor errado! Reinicie el programa.\n");
    }

    else{

        int matrizA[n][n];
        int matrizB[n][n];
        int matrizC[n][n];
        srand(time(NULL)); //Semilla random
        printf("\nResultado: \n");

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrizA[i][j] = rand() % 10;
                matrizB[i][j] = rand() % 10;
                matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
            }
        }
        printf("Matriz 1: \n");
        printf("\n");
        imprimirMatriz(n, matrizA);
        printf("\n");
        printf("Matriz 2: \n");
        printf("\n");
        imprimirMatriz(n, matrizB);
        printf("\n");
        printf("Resultado de la resta: \n");
        printf("\n");
        imprimirMatriz(n, matrizC);
    }
}

// 10. Programa que genera dos matrices aleatorias de tamanio N x N, las multiplica y
// presenta el resultado.

void productoMatricesRandom(){

    int n;
    printf("Por favor ingrese el tamaño de las matrices (menor a 8): ");
    scanf("%d", &n);

    if(n > 8){
        printf("Valor errado! Reinicie el programa.\n");
    }

    else{

        int matrizA[n][n];
        int matrizB[n][n];
        int matrizC[n][n];
        srand(time(NULL)); //Semilla random
        printf("\nResultado: \n");
        
        //Asignación de valores random para matrizA y matrizB
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrizA[i][j] = rand() % 10;
                matrizB[i][j] = rand() % 10;
                for(int k = 0; k<n; k++){
                    matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
                }
                }
            }

        //Producto
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrizC[i][j] = 0;
                for(int k = 0; k<n; k++){
                    matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }

        printf("Matriz 1: \n");
        imprimirMatriz(n, matrizA);
        printf("\n");
        printf("Matriz 2: \n");
        imprimirMatriz(n, matrizB);
        printf("\n");
        printf("Resultado del producto: \n");
        imprimirMatriz(n, matrizC);
    }    
}

// Presentación del programa (Menú de Opciones)
void presentacion(){

    printf("\n");
    printf("********************************************************************\n");
    printf("---------------------- Bienvenido al Programa ----------------------\n");
    printf("********************************************************************\n");
    printf("\n");
    printf("\tElija una Opcion: \n");
    printf("\n");
    printf("\t1.  Calcular el producto de dos enteros.\n");
    printf("\t2.  Convertir los dias especificados en años, semanas y días.\n");
    printf("\t3.  Calcular la distancia entre dos puntos.\n");
    printf("\t4.  Imprimir los primeros diez numeros naturales.\n");
    printf("\t5.  Programa que muestra como patron un triangulo rectangulo usando un asterisco.\n");
    printf("\t6.  Imprimir una matriz de [1], de tamanio N x N.\n");
    printf("\t7.  Imprimir una matriz de números aleatorios enteros entre 0 y 9.\n");
    printf("\t8.  Sumar dos matrices de números aleatorios entre 0 y 9.\n");
    printf("\t9.  Restar dos matrices de números aleatorios entre 0 y 9.\n");
    printf("\t10. Multiplicar dos matrices de números aleatorios entre 0 y 9.\n");
    printf("\n");
}

//Switch case donde se selecciona la opción y se llaman las funciones.
void opciones(){
    printf("Ingrese una opción: ");
    int opcion = 0;
    scanf("%d", &opcion);
    printf("\n");

    switch (opcion) {

        case 1:
            producto();
            break;
        case 2:
            aniosSemanasDias();
            break;
        case 3:
            distancia();
            break;
        case 4:
            numNaturales();
            break;
        case 5:
            trianguloAsteriscos();
            break;
        case 6:
            matrizUnos();
            break;
        case 7:
            matrizRandom();
            break;
        case 8:
            sumaMatricesRandom();
            break;
        case 9:
            restaMatricesRandom();
            break;
        case 10:
            productoMatricesRandom();
            break;
        default:
            printf("Valor errado! Reinicie el programa.\n");
            break;
    }
}
