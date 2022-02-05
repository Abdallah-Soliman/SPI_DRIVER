/*

 * APP.c
 *
 *  Created on: Jan 25, 2022
 *      Author: abdalah
 */


#include "primitive_data_types.h"
#include "SPI_INTERFACE.h"
#include "DIO_interface.h"
void main ()
{
	LCD_VoidInit4b();

	SPI_U8SlaveInit(PORTB ,PIN5,PIN6,PIN4,PIN7);

    uint8_t f=9;


    while(1)
	{	 f=SPI_TranSever(&f);
	    if(f == 'n')
	    LCD_WriteData4b(f);

	}

}
