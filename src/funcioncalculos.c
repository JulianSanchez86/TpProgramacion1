/*
 * funcioncalculos.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Juki
 */

#include <stdio.h>
#include <stdlib.h>

float debito(float precio){
float descuento;

descuento = (float) precio * 10/100;
descuento = precio - descuento;


return descuento;
}

float credito(float precio){
float credito1;

credito1 = (float) precio * 25/100;
credito1 = precio + credito1;

return credito1;
}

float btc(float precio){
float btc1;

btc1 = (float) precio / 4606954.55;

return btc1;
}

float precioKm(float precio , int kilometros){
float precioKm1;

precioKm1 = (float) precio / kilometros;

return precioKm1;
}

float diferenciaPrecio(float precio1, float precio2)
{
float diferencia;

if(precio1 < precio2){

	diferencia =  (float) precio2 - precio1;
}else
{
	diferencia = (float) precio1 - precio2;
}

return diferencia;

}

