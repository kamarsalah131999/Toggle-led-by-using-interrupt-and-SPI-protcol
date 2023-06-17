/*
 * led.h
 *
 * Created: 6/09/2021 5:43:53 PM
 *  Author: kamar salah
 */ 


#ifndef LED_H_
#define LED_H_

/* function description:
intialize the pin as output pin to conectd the led
*/
void led_vinit (char port_name, char pin_num );

/* function description:
turn on the led 
*/
void led_vturnon (char port_name, char pin_num);

/* function description:
turn off the led
*/
void led_vturnoff (char port_name, char pin_num);

/* function description:
taggle the led conected the potrt
*/
void led_vtaggle (char port_name, char pin_num);

/* function description:
read the current value on the out pin wich conected led
*/
char led_u8read_statues (char port_name, char pin_num);
#endif /* LED_H_ */