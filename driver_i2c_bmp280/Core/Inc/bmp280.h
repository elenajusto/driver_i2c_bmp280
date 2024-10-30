/*
 * bmp280.h
 *
 *  Created on: Oct 30, 2024
 *      Author: elena
 */

#ifndef INC_BMP280_H_
#define INC_BMP280_H_

#include "stm32f4xx_hal.h"	/* Needed for I2C */

/*
 * 	SETUP
 */
#define BMP280_CONFIG		0xF5
#define BMP280_CTRL_MEAS	0xF4
#define BMP280_STATUS		0xF3
#define BMP280_RESET		0xE0
#define BMP280_ID			0xD0


/*
 * 	REGISTERS
 */


#endif /* INC_BMP280_H_ */
