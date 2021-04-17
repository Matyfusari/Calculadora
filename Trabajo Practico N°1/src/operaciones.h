/*
 * operaciones.h
 *
 *  Created on: 14 abr. 2021
 *      Author: matyf
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_


void calcular(int valor_1,int valor_2);
int suma(int valor_1,int valor_2);
int resta(int valor_1,int valor_2);
float division(int valor_1,int valor_2);
int multiplicacion(int valor_1,int valor_2);
long long factorizar(int valor_1);
void mostrar_resultados(int valor_1,int valor_2);
int utn_getNumero (int* pResultado, char* mensaje,char* mensajeError, int minimo,int maximo,int reintentos);


#endif /* OPERACIONES_H_ */
