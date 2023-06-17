/*
 * Master.c
 *
 * Created: 6/17/2023 3:28:45 AM
 * Author : kamar
 */ 

#include <avr/io.h>
#include "led.h"
#include "SPI driver.h"
#include <avr/interrupt.h>
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
	unsigned char x=0;
	led_vinit ('D', 7);
	SPI_MasterInit();
	sei();
	
    
    while (x<10) 
    {
		SPI_MasterTransmitchar(48+x);
		_delay_ms(1000);
		x++;
    }
}

ISR(SPI_STC_vect)
{
	led_vtaggle ('D', 7);
}