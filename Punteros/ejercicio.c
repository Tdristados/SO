#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
  int processID = fork();
  if(processID>0){
    printf("Fork() devuelve un valor +ve. Este es el 'proceso padre' con DI: %d\n", getpid());
  }
  else if (processID==0){
    printf("Fork() devuelve un valor 0. Este es el 'proceso hijo' recien creado con con DI: %d\n", getpid());
    printf("El 'Proceso padre' de este 'proceso hijo' tiene el ID: %d\n",getppid());
  }
  else{
    printf("Fork() devuelve el valor -ve, por lo que la llamada al sistema fork() falló\n");
  }
  printf("\n\nEsta es una única impresión si la llamada al sistema fork() ha tenido éxito\n");
  printf("Tanto el proceso padre como el 'proceso hijo' se ejecutará simultaneamente\n");
  printf("Y esta impresión aparecerá dos veces.\n");
  return 0;
}