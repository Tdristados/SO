/* Autor: Andrés Leonardo Manrique Hernández
 * Fecha: 8 febrero 2024
 * Materia: Sistemas operativos
 * Tema: Multiplicación de matrices
 * Fichero: Biblioteca */

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include "matrizMulti.h"

struct timeval start, stop;

//Inicializa el tiempo 
void inicio_tiempo(){gettimeofday(&start, NULL);}

//Finaliza el tiempo
void fin_tiempo() {
  gettimeofday(&stop, NULL);
  stop.tv_sec -= start.tv_sec;
  printf("%9.0f µs\n", (double)(stop.tv_sec * 1000000 + stop.tv_usec));
}

//Se encarga de imprimir matrices
void impresionMatriz(int M[SZ][SZ]) {
  for (int i = 0; i < SZ; i++) {
    for (int j = 0; j < SZ; j++) {
      printf(" %d ", M[i][j]);
    }
    printf("\n");
  }
}

//Código inspirado en: https://parzibyte.me/blog/2019/11/11/producto-matrices-c-multiplicacion/. Para multiplicar matrices
void multiMatriz(int M[SZ][SZ], int N[SZ][SZ], int P[SZ][SZ]){
  for (int k = 0; k < SZ; k++){
    for (int i = 0; i < SZ; i++) {
      int sum = 0;
      for (int j = 0; j < SZ; j++) {
        sum += M[i][j] * N[j][k];}
      P[i][k] = sum;
    }
  }
}
