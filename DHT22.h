/*
 * DHT22.h
 *
 *  Created on: Jan 27, 2025
 *      Author: kakashi
 */

#ifndef INC_DHT22_H_
#define INC_DHT22_H_
#include"stm32f4xx_hal.h"

#define DHT22_PORT        GPIOA
#define DHT22_PIN         GPIO_PIN_0

void DHT22_Start(void);
uint8_t DHT22_Read(void);
uint8_t DHT22_GET_Reading(float *temp ,float *humidity);


#endif /* INC_DHT22_H_ */
