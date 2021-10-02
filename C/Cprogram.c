/*
 * Cprogram.c
 *
 *  Created on: 2 oct. 2021
 *      Author: diegobarbosa
 */
#include <stdio.h>
#include <math.h>

double leerDato();

double log(double y)
{
	double resultado;
	resultado=log10(y);
	return resultado;

}

int main(void)
{
	double x, n;
	printf("Dato: ");
	n=leerDato();
	x=log(n);
	printf("El logaritmo de %g es %f\n",n,x);

}


double leerDato(){
	int r=0;
	double dato;
	while (r==0){
		r=scanf("%lf",&dato);
		if(r==0)
		{
			printf("Dato incorrecto. Introduzca otro: \b");
		}
		while(getchar()!='\n');
	}

	return dato;
}
