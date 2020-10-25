/*
 * I2C_generic_lib.h
 *
 * Created: 2020-10-25 12:16:57
 *  Author: Jimmy
 */ 

#ifndef INCFILE2_H_
#define INCFILE2_H_

#include <avr/io.>
#include <pinDefines.h>

void initI2C(void);
	/* Sets pullups and initializes bus speed to 100kHz (At FCPU=8MHz) */
	
void i2cWaitForComplete(void);
	/* Waits until the hardware sets the TWINT flag */
	
void i2cStart(void);
	/* Sends a start condition (sets TWSTA) */
	
void i2cStop(void);
	/* Sends a stop condition (sets TWSTO) */
	
void i2cSend(uint8_t data);
	/* Loads data, sends it out and waiting for completion */
	
uint8_t i2cReadAck(void);
	/* Read in from slave, sending ACK when done (sets TWEA) */
	
uint8_t i2cReadNoAck(void);
	/* Read in from slave, sending NOACK when done (no TWEA) */
	

#endif /* INCFILE2_H_ */
