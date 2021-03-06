/*
 * Calculos.c
 *
 *  Created on: 8 abr 2022
 *      Author: Usuario Programador
 */
#include "Calculos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void utnCalcularCostos(float parametroPivot, float parametroA, float parametroB,float* parametroAconDescuento,
		float* parametroBconDescuento,float* parametroAconAumento,float* parametroBconAumento,float* valorPorUnidadParametroB,
		float* valorPorUnidadParametroA,float* difDeValores)
{
	float parAconDescuento;
	float parBconDescuento;
	float parAconAumento;
	float parBconAumento;
	float parAporUnidad;
	float parBporUnidad;
	float diferenciaDeValores;

	utnCostoConDescuento(parametroA,&parAconDescuento);
	*parametroAconDescuento=parAconDescuento;
	utnCostoConDescuento(parametroB,&parBconDescuento);
	*parametroBconDescuento=parBconDescuento;

	utnCostoConAumento(parametroA,&parAconAumento);
	*parametroAconAumento=parAconAumento;
	utnCostoConAumento(parametroB,&parBconAumento);
	*parametroBconAumento=parBconAumento;

	utnCostoUnitario(parametroB,parametroPivot,&parBporUnidad);
	*valorPorUnidadParametroB=parBporUnidad;
	utnCostoUnitario(parametroA,parametroPivot,&parAporUnidad);
	*valorPorUnidadParametroA=parAporUnidad;

	utnDiferenciaDeValores(parametroA,parametroB,&diferenciaDeValores);
	*difDeValores=diferenciaDeValores;
}

void utnCostoConAumento(float precioInicial, float* precioConRecargo)
{
	*precioConRecargo=(float)precioInicial*1.25;
}

void utnCostoConDescuento(float precioInicial,float* precioConDescuento )
{
	*precioConDescuento=(float)precioInicial*0.9;
}

void utnCostoUnitario(float precioInicial,  float undiad, float* precioPorUnidad)
{
	float precioUnitario;
	precioUnitario=precioInicial/undiad;
	*precioPorUnidad=precioUnitario;
}

void utnDiferenciaDeValores(float valorA, float valorB, float* valorResultado)
{
	if(valorA>valorB||valorA==valorB)
	{
		*valorResultado=valorA-valorB;
	}
	else
	{
		*valorResultado=valorB-valorA;
	}
}

