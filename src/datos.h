/*
 * datos.h
 *
 *  Created on: 11 abr. 2022
 *      Author: Juki
 */

#ifndef DATOS_H_
#define DATOS_H_

/// @fn int datos(float float float float float float float int float float float float)
/// @brief Muestra todos los resultados de las operaciones realizadas
///
/// @param debitoLatam creditoLatam debitoAerolineas creditoAerolineas precioBtcLatam precioBtcAerolineas precioPorKmAerolineas kilometrosIngresados precioPorKmLatam diferenciaPrecios precioIngresadoLatam precioIngresadoAerolineas
/// @return 0 retorna la opcion seleccionada
int datos(float debitoLatam, float creditoLatam, float debitoAerolineas, float creditoAerolineas, float precioBtcLatam, float precioBtcAerolineas, float precioPorKmAerolineas, int kilometrosIngresados, float precioPorKmLatam, float diferenciaPrecios,float precioIngresadoLatam,float precioIngresadoAerolineas);
int menu(void);

#endif /* DATOS_H_ */
