/*
 * avr_test.c
 *
 * Created: 2018-11-07 오후 2:28:27
 * Author : kccistc
 */ 

#define F_CPU 16000000L

#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    DDRA = 0xff;
	PORTA = 0x00;
	
    while (1) 
    {
		PORTA = 0xff;
		_delay_ms(300);
		PORTA = 0x00;
		_delay_ms(300);
    }
}