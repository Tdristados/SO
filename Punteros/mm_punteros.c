/******************************************************
 * Autor: Andrés Manrique Hernández
 * Fecha: 22/02/2024
 * Materia: Sistemas operativos
 * Tema: Punteros, reserva de memoria y Multiplicación
 * de matrices con punteros
 *****************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

/**Un valor constante global (muy grande)**/
#define DATA_SIZE (1024*1024*64*8)

  /*Fubción para la incialización de las matrices*/
void InitMatrices(int sz, double *ma, double *mb, double *mc){
  for (int i = 0; i < sz*sz; i++) {
    ma[i] = 2.1 + i;
    mb[i] = 1.3 + i;
    mc[i] = 0.0;
  }
}  

/*Función para la impresión de las matrices*/
void ImpresionMatriz(int sz, double *m){
  for (int i=0; i<sz;i++){ // Filas
    for (int j=0;j<sz;j++){ // Columnas
      printf(" %f ", m[i+j*sz]);
    }
    printf("\n");
  }
}



/**Ahora se reserva un espacio de memoria (muy grande)**/
static double MEM_CHUNK[DATA_SIZE];


int main(int argc, char *argv[1]) {
  int SZ;
  if (argc > 1) {
    SZ = (int) atof(argv[1]);
  } else {
    printf("Ingreso de parámetros erroneos: \n");
    printf("$./ejecutable valor \n");
    return -1;
  }
  printf("Matriz[%d][%d]\n",SZ,SZ);

  
  /*Creamos las matrices*/  

  double *Ma,*Mb, *Mc;
  Ma = MEM_CHUNK;
  Mb = Ma + SZ*SZ;
  Mc = Mb + SZ*SZ;

  /*Inicializacmos las matrices*/
  InitMatrices(SZ,Ma,Mb,Mc);
  
  /*Impresiones de las matrices*/
  printf("\n********* Matriz A ***********\n");
  ImpresionMatriz(SZ,Ma);
  printf("\n********* Matriz B ***********\n");
  ImpresionMatriz(SZ,Mb);
  printf("\n********* Matriz C ***********\n");
  ImpresionMatriz(SZ,Mc);
  return 0;
};
