/*
 * funcioncalculos.h
 *
 *  Created on: 11 abr. 2022
 *      Author: Juki
 */

#ifndef FUNCIONCALCULOS_H_
#define FUNCIONCALCULOS_H_

/// @fn int debito(float )
/// @brief realiza el descuento con tarjeta debito
///
/// @param debitoLatam, debitoAerolineas.
/// @return descuento retorna la opcion seleccionada
float debito(float precio);


/// @fn int credito(float )
/// @brief realiza el interes con tarjeta credito
///
/// @param creditoLatam, creditoAerolineas
/// @return credito1 retorna la opcion seleccionada
float credito(float precio);

/// @fn int btc(float )
/// @brief calcula la cantidad de btc utilizado
///
/// @param precioBtcLatam, precioBtcAerolineas
/// @return btc1 retorna la opcion seleccionada
float btc(float precio);

/// @fn int precioKM(float int )
/// @brief calcula el precio por kilometros
///
/// @param precioPorKmLatam, precioPorKmAerolineas
/// @return precioKm1 retorna la opcion seleccionada
float precioKm(float precio, int kilometros);

/// @fn int diferenciaPrecio(float  float )
/// @brief Realiza la diferencia de precio entre ambas aerolineas
///
/// @param precioIngresadoLatam, precioIngresadoAerolineas
/// @return diferencia retorna la opcion seleccionada
float diferenciaPrecio(float precio1, float precio2);



#endif /* FUNCIONCALCULOS_H_ */
