/*
 * utnInPuts.h
 *
 *  Created on: 9 abr 2022
 *      Author: Usuario Programador
 */

#ifndef UTNINPUTS_H_
#define UTNINPUTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * \brief
 * @param pNumeroIngresado
 * @param mensaje
 * @param mensajeError
 * @param mensajeSeguirNoSeguir
 * @param minimo
 * @param maximo
 * @param reintentos
 * @return
 */
int utnGetNumero(float* pNumeroIngresado, char* mensaje, char* mensajeError,char* mensajeSeguirNoSeguir,
		int minimo, int maximo, int reintentos);

/**
 *
 * @param mensajeValidacion
 * @param mensajeFinal
 * @return
 */
int utnVerificacionConChar(char* mensajeValidacion,char* mensajeFinal);

void utnMostrarResultados(float parametroPivot, float parametroA, float parametroB,float parametroAconDescuento,
		float parametroBconDescuento,float parametroAconAumento,float parametroBconAumento,float valorPorUnidadParametroB,
		float valorPorUnidadParametroA,float difDeValores);

float utnIngresarFlotante(char mensaje[]);

int utnRecibeCadenaSoloCaracteres(char cadena[],char mensaje[],int reintentos,int tam);

int utnIngresarAlfanumerico(char cadena[], char mensaje[], int tam);

char utnIngresarChar(char mensaje[]);


#endif /* UTNINPUTS_H_ */
