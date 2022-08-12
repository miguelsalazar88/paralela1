/************************************************
*   Universidad Sergio Arboleda                 *
*   Computacion Paralela y Distribuida          *
*   Ejercicio: Compilacion por Separado         *
*   Presentado por: Miguel Salazar di Colloredo *
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Esta biblioteca se usa para la generación de numeros aleatorios.
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
void producto(int a, int b){
    int p = a*b;
    printf("El producto de %d y %d es igual a: %d\n", a, b, p);
}

// 2. Programa que convierte los dias especificados en años, semanas y días.
void aniosSemenasDias(int dias){

    int anios = dias/365;
    int resto = dias % 365;
    int semanas = resto / 7;
    resto = resto % 7;
    printf("Anios   = %d \nSemanas = %d \nDias    = %d \n", anios, semanas, resto);
}

// 3. Programa que calcula la distancia entre dos puntos.
void distancia(float x1, float y1, float x2, float y2){

    float distancia = sqrt( pow((x2-x1),2) + pow((y2-y1),2) );
    printf("La distancia entre los puntos es: %.4f \n", distancia);
}

// 4. Programa que imprime los primeros diez numeros naturales.
void numNaturales(){

    for (int i = 0; i < 10; i++){
        printf("%d ", (i+1));
    }
    
}

// 5. Programa que muestra como patron un triangulo rectangulo usando un asterisco
void trianguloAsteriscos(int n){

    char string[14] = "*";

    for (int i = 0; i < n; i++){
        
        printf("%s\n", string);
        strcat(string, "*");
    }  
}

// 6. Programa que imprime una matriz de "1", de tamanio N x N

void matrizUnos(int n){

    int matriz[n][n];

    for (int i = 0; i < n; i++){
        
        printf("\n");

        for (int j = 0; j < n; j++){
            matriz[i][j] = 1;
            printf("%d", matriz[i][j]);
        }    
    }
    
}

// 7. Programa que imprime una matriz de numeros aleatorios enteros,
// entre 0 y 9, de tamanio N x N.
void matrizRandom(int n){
    
    srand(time(NULL)); //Semilla random
    int matriz[n][n];
    
    for(int i = 0; i < n; i++){   
        for(int j = 0; j < n; j++){

            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}

// 8. Programa que genera dos matrices aleatorias de tamanio N x N, las suma y
// presenta el resultado.

void sumaMatricesRandom(int n){

    int matrizA[n][n];
    int matrizB[n][n];
    int matrizC[n][n];

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

// 9. Programa que genera dos matrices aleatorias de tamanio N x N, las resta y
// presenta el resultado.

void restaMatricesRandom(int n){

    int matrizA[n][n];
    int matrizB[n][n];
    int matrizC[n][n];
    srand(time(NULL)); //Semilla random

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

// 10. Programa que genera dos matrices aleatorias de tamanio N x N, las multiplica y
// presenta el resultado.

void productoMatricesRandom(int n){

    int matrizA[n][n];
    int matrizB[n][n];
    int matrizC[n][n];
    srand(time(NULL)); //Semilla random
    
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


void presentacion(){

    printf("*********** Bienvenido al Programa ***********\n");
    printf("Elija una Opcion: \n");
}


int main(){
    productoMatricesRandom(8);
}