/*
 *
 *  Created on: Jan 25, 2022
 *      Author: abdalah
 */
#include "primitive_data_types.h"

#include "SPI_INTERFACE.h"
#include "DIO_interface.h"
void main ()
{
         SPI_U8MasterInit(PORTB ,PIN5,PIN6,PIN7);
	uint8_t au8_receive=LOW;
 DIO_SetPinDirection(PORTA,PIN0,OUTPUT);
 DIO_SetPinValue(PORTA,PIN0,OUTPUT);

 while(1)
	{

	     /*Send to slave n character*/
		uint8_t au8_send ='n';
	    DIO_SetPinValue(PORTA,PIN0,LOW);
			au8_receive= SPI_TranSever(&au8_send);
			DIO_SetPinValue(PORTA,PIN0,HIGH);

	}

}
