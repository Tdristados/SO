#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
  int processID = fork();
  if(processID>0){
    printf("\n'proceso padre'...");
  }
  else if (processID==0){
    printf("\n'proceso hijo' recien creado\n");
  }
  else{
    printf("\nLlamada al sistema fork() falló\n");
  }
  
  printf("\n\nImpri,miendo...\n");
  for (int i = 0;i<5;i++){
    printf("%d",i);
  }
  printf("\nFin\n");
  return 0;
}