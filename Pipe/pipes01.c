#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

#define MESSAGESIZE 16

char *mensaje01 = "Hola, mundo #1!";
char *mensaje02 = "Hola, mundo #2!";
char *mensaje03 = "Hola, mundo #3!";

int main(int argc, char *argv[]){
  char inbufer[MESSAGESIZE];
  int p[2], i;
  if (pipe(p)< 0)
    exit(1);
  write(p[1], mensaje01, MESSAGESIZE);
  write(p[1], mensaje02, MESSAGESIZE);
  write(p[1], mensaje03, MESSAGESIZE);
  for(i=0; i<3;i++){
    read(p[0], inbufer, MESSAGESIZE);
    printf("%s\n", inbufer);
  }
  return 0;
  }