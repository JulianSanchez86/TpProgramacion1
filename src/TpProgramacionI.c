/*
 ============================================================================
 Name        : TpProgramacionI.c
 Author      : Julian Agustin Sanchez DIV D 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcioncalculos.h"
#include "datos.h"


int main(void) {
   setbuf(stdout, NULL);
   int respuesta;
   int kilometrosIngresados = 0;
   float precioIngresadoLatam = 0;
   float precioIngresadoAerolineas = 0;
   float debitoLatam;
   float creditoLatam;
   float debitoAerolineas;
   float creditoAerolineas;
   float precioBtcLatam;
   float precioBtcAerolineas;
   float precioPorKmLatam;
   float precioPorKmAerolineas;
   float diferenciaPrecios;
   int contador = 0;


   do{
      menu();

	   scanf("%d", &respuesta);

   switch(respuesta){
   case 1:
	   printf("\nIngrese los Kilometros deseados");
	   scanf("%d", &kilometrosIngresados);
	break;

   //Se ingresa el precio a la aerolinea seleccionada
   case 2:
	   printf("\nIngrese el precio del vuelo (LATAM)");
	   scanf("%f", &precioIngresadoLatam);

	   printf("\nIngrese el precio del vuelo (AEROLINEAS)");
	   scanf("%f" , &precioIngresadoAerolineas);
	   break;

   case 3:

	if(precioIngresadoLatam == 0 && precioIngresadoAerolineas == 0 && kilometrosIngresados == 0){
        //Validacion
		printf("Error, el numero ingresado debe ser 1 o mas\n");
	}else
	{
	contador = 1;
	debitoLatam = debito(precioIngresadoLatam);

	creditoLatam = credito(precioIngresadoLatam);


	debitoAerolineas = debito(precioIngresadoAerolineas);

	creditoAerolineas = credito(precioIngresadoAerolineas);


	precioBtcLatam = btc(precioIngresadoLatam);


	precioBtcAerolineas = btc(precioIngresadoAerolineas);


	precioPorKmLatam = precioKm(precioIngresadoLatam, kilometrosIngresados);


	precioPorKmAerolineas = precioKm(precioIngresadoAerolineas, kilometrosIngresados);


	diferenciaPrecios = diferenciaPrecio(precioIngresadoAerolineas, precioIngresadoLatam );
	}

	break;

   case 4:
   if(contador == 0)
   {
	   	//Validacion
	   	printf("Error, no se realizaron calculos\n");
	   	}
   else
	   	{
	   		datos(debitoLatam,creditoLatam,debitoAerolineas,creditoAerolineas,precioBtcLatam,precioBtcAerolineas,precioPorKmLatam,kilometrosIngresados,precioPorKmAerolineas,diferenciaPrecios,precioIngresadoLatam,precioIngresadoAerolineas);
	    }
   break;

   //Ingreso automatico de valores
   case 5:

	    kilometrosIngresados = 7090;
	    precioIngresadoAerolineas = 162965;
	    precioIngresadoLatam = 159339;

	    debitoLatam = debito(precioIngresadoLatam);

	   	creditoLatam = credito(precioIngresadoLatam);


	   	debitoAerolineas = debito(precioIngresadoAerolineas);

	   	creditoAerolineas = credito(precioIngresadoAerolineas);


	   	precioBtcLatam = btc(precioIngresadoLatam);


	   	precioBtcAerolineas = btc(precioIngresadoAerolineas);


	   	precioPorKmLatam = precioKm(precioIngresadoLatam, kilometrosIngresados);


	   	precioPorKmAerolineas = precioKm(precioIngresadoAerolineas, kilometrosIngresados);


	   	diferenciaPrecios = diferenciaPrecio(precioIngresadoAerolineas, precioIngresadoLatam );

	   	datos(debitoLatam,creditoLatam,debitoAerolineas,creditoAerolineas,precioBtcLatam,precioBtcAerolineas,precioPorKmLatam,kilometrosIngresados,precioPorKmAerolineas,diferenciaPrecios,precioIngresadoLatam,precioIngresadoAerolineas);

   break;

   //Opcion 6 exit
   default:
	   printf("Fin de funcion");


   }







   } while (respuesta < 6);

   return 0;

}
