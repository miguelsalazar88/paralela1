/*************************************************************
* Universidad Sergio Arboleda
* Computacion Paralela y Distribuida
* Ejercicio: Compilacion por Separado
* Presentado por: Miguel Salazar di Colloredo
**************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Programa que calcula el producto de dos enteros.
void producto(int a, int b){
    int p = a*b;
    printf("El producto de %d y %d es igual a: %d\n", a, b, p);
}

//Programa que convierte los dias especificados en anios, semanas y dias.
void aniosSemenasDias(int dias){

    int anios = dias/365;
    int resto = dias % 365;
    int semanas = resto / 7;
    resto = resto % 7;
    
    printf("Anios   = %d \nSemanas = %d \nDias    = %d \n", anios, semanas, resto);
}

// Programa que calcula la distancia entre dos puntos.
void distancia(float x1, float y1, float x2, float y2){
    float distancia = sqrt( pow((x2-x1),2) + pow((y2-y1),2) );
    printf("La distancia entre los puntos es: %.4f \n", distancia);
}

//Programa que imprime los primeros diez numeros naturales.
void numNaturales(){
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", (i+1));
    }
    
}

//Programa que imprime una matriz de "1", de tamanio N x N
void matrizUnos(int n){

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            matriz[n][n] = 1;
            printf("%d", matriz[n][n]);
        }
        
    }
    
}

// Programa que muestra como patron un triangulo rectangulo usando un asterisco
void trianguloAsteriscos(int n){

    char string[14] = "*";

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", string);
        strcat(string, "*");
         
    }  
}


void presentacion(){
    printf("*********** Bienvenido al Programa ***********\n");
    printf("Elija una Opcion: \n");
}

int main(){
    matrizUnos(5);
}