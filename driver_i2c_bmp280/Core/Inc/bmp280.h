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
 *	MEASUREMENTS
 */
#define BMP280_temp_xlsb	0xFC
#define BMP280_temp_lsb		0xFB
#define BMP280_temp_msb		0xFA
#define BMP280_press_xlsb	0xF9
#define BMP280_press_lsb	0xF8
#define BMP280_press_msb	0xF7

/*
 * 	CALIBRATION
 */
#define BMP280_calib00		0x88	/* dig_T1 LSB */
#define BMP280_calib01		0x89	/* dig_T1 MSB */

#define BMP280_calib02		0x8A	/* dig_T2 LSB */
#define BMP280_calib03		0x8B	/* dig_T2 MSB */

#define BMP280_calib04		0x8C	/* dig_T3 LSB */
#define BMP280_calib05		0x8D	/* dig_T3 MSB */

#define BMP280_calib06		0x8E	/* dig_P1 LSB */
#define BMP280_calib07		0x8F	/* dig_P1 MSB */

#define BMP280_calib08		0x90	/* dig_P2 LSB */
#define BMP280_calib09		0x91	/* dig_P2 MSB */

#define BMP280_calib10		0x92	/* dig_P3 */
#define BMP280_calib11		0x93	/* dig_P3 */

#define BMP280_calib12		0x94	/* dig_P4 */
#define BMP280_calib13		0x95	/* dig_P4 */

#define BMP280_calib14		0x96	/* dig_P5 */
#define BMP280_calib15		0x97	/* dig_P5 */

#define BMP280_calib16		0x98	/* dig_P6 */
#define BMP280_calib17		0x99	/* dig_P6 */

#define BMP280_calib18		0x9A	/* dig_P7 */
#define BMP280_calib19		0x9B	/* dig_P7 */

#define BMP280_calib20		0x9C	/* dig_P8 */
#define BMP280_calib21		0x9D	/* dig_P8 */

#define BMP280_calib22		0x9E	/* dig_P9 */
#define BMP280_calib23		0x9F	/* dig_P9 */

#define BMP280_calib24		0xA0	/* Reserved */
#define BMP280_calib25		0xA1	/* Reserved */

#endif /* INC_BMP280_H_ */
