
#include <avr/io.h>

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <util/delay.h>
#include "I2C.h"
#include "OLED.h"

int main(void)
{
	I2C_Master_Init();

	
	OLED_Init();
	
	OLED_SetCursor(3, 50);


	/*OLED_DisplayString("Jana");*/
OLED_DisplayString("Jana");
	while (1)
	{
		// OLED_DisplayChar('J');
		 
	}

	return 0;
}