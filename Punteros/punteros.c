/************************************************
 *
 * Autor: Andrés Manrique Hernández
 * Fecha: 15/02/2024
 * Materia: Sistemas operativos
 * Tema: Punteros
 *************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

int main(int argc, char *argv[1]) {
  int size;
  if (argc > 1) {
    size = atoi(argv[1]);
  } else {
    printf("Ingreso de parametros erroneos: \n");
    return -1;
  }
  printf("El valor ingresado es : %d\n", size);

  int vector[size];

  /*Llenamos el vector*/

  for (int i = 0; i < size; i++) {
    vector[i] = 3 * i + 2;
    printf("vector[%d] = %d\n", i, vector[i]);
  }

  /*Creamos un puntero*/
  int *puntero = vector;
  for (int i = 0; i < size; i++, *puntero++) {
    printf("valor del puntero = %d\n", *puntero);
  }
  return 0;
};
