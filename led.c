/*
 * led.c
 *
 * Created: 6/09/2021 5:43:36 PM
 *  Author: kamar salah
 */ 
#include "DIO drivers.h"

void led_vinit (char port_name, char pin_num )
{
	 DIO_vset_pin_dir( port_name,  pin_num, 1);       // set given pin in given port as output
}

void led_vturnon (char port_name, char pin_num)
{
	DIO_vwrite_pin( port_name,  pin_num, 1);           // set given pin in given port turn on
}

void led_vturnoff (char port_name, char pin_num)
{
	DIO_vwrite_pin( port_name,  pin_num, 0);         // set given pin in given port turn off
}

void led_vtaggle (char port_name, char pin_num)
{
	DIO_vtaggle_pin(port_name, pin_num);
}
 char led_u8read_statues (char port_name, char pin_num)
{
	return DIO_u8read_pin( port_name,  pin_num);               // read the current value on the given pin 
}