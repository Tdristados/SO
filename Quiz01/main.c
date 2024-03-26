/***** Captura de Tiempos ***********
Autor: John Corredor
Coautor: Andrés Leonardo Manrique Hernández
Fecha: 8 febrero 2024
Materia: Sistemas Operativos
Pontificia Universidad Javeriana
Tema: Captura de tiempo de algoritmos
        - Multiplicación de Matrices
        - Creación de Makefile (compilación automatizada)
Fichero: Fuente (Main)
*************************************/

#include "matrizMulti.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

int main() {
  srand(time(NULL));

  //Creamos las matrices, AxB=C
  int A[SZ][SZ];
  int B[SZ][SZ];
  int C[SZ][SZ];

  //Llenamos las matrices A y B de datos aleatorios
  for (int i = 0; i < SZ; i++) {
    for (int j = 0; j < SZ; j++) {
      A[i][j] = 1 + rand() % 7;
    }
  }

  for (int i = 0; i < SZ; i++) {
    for (int j = 0; j < SZ; j++) {
      B[i][j] = 1 + rand() % 7;
    }
  }

  // Multiplicamos y 
  multiMatriz(A, B, C);
  printf("Matriz A:\n");
  impresionMatriz(A);
  printf("**************************************\n\n");

  printf("Matriz B:\n");
  impresionMatriz(B);
  printf("**************************************\n\n");

  printf("Matriz AxB:\n");
  impresionMatriz(C);
  printf("**************************************\n\n");
  return 0;
}
