/*
 * datos.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Juki
 */


#include <stdio.h>
#include <stdlib.h>
int datos(float debitoLatam, float creditoLatam, float debitoAerolineas, float creditoAerolineas, float precioBtcLatam, float precioBtcAerolineas, float precioPorKmLatam, int kilometrosIngresados, float precioPorKmAerolineas, float diferenciaPrecios, float precioIngresadoLatam, float precioIngresadoAerolineas){

	printf("\nKM ingresados: %d kms"
		   "\nInforme de resultados:"
		   "\nPrecio Latam %f:"
		   "\n a) precio con tarjeta de debito %f:"
		   "\n b) precio con tarjeta de credito %f:"
		   "\n c) precio pagando con BTC %f:"
		   "\n d) precio unitario %f:"
		   "\nPrecio Aerolineas %f:"
		   "\n a) precio con tarjeta de debito %f:"
		   "\n b) precio con tarjeta de credito %f:"
		   "\n c) precio pagando con BTC %f:"
		   "\n d) precio unitario %f:"
		   "\n La diferencia de precios es de: %f" , kilometrosIngresados, precioIngresadoLatam, debitoLatam, creditoLatam, precioBtcLatam, precioPorKmLatam, precioIngresadoAerolineas, debitoAerolineas, creditoAerolineas, precioBtcAerolineas, precioPorKmAerolineas, diferenciaPrecios );


	return 0;

}

int menu(void){
	printf( "1- Ingrese los Kilometros. \n"
				   "2- Ingrese el precio de vuelos\n"
				   "3- Calculo de todos los costos. \n"
				   "4- Resultados informados. \n"
				   "5- Carga forzada de datos \n"
				   "6- Salir \n"
				   "Ingrese la opcion deseada");

	return 0;

}
