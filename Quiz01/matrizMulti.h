/* Autor: Andrés Leonardo Manrique Hernández
 * Fecha: 8 febrero 2024
 * Materia: Sistemas operativos
 * Tema: Multiplicación de matrices
 * Fichero: Interfaz */

#ifndef __MATRIZMULTI_H__
#define __MATRIZMULTI_H__
#define SZ 10

//Funciones

void inicio_tiempo();
void fin_tiempo();
void impresionMatriz(int M[SZ][SZ]);
void multiMatriz(int M[SZ][SZ], int N[SZ][SZ], int P[SZ][SZ]);

#endif