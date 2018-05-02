/*
 * LEDON_OFF.cpp
 *
 * Created: 2018-05-02 오전 10:52:19
 * Author : stc_167
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD=0xff;
	PORTD=0xff;
    /* Replace with your application code */
    while (1) 
    {
			PORTD=0xff;
<<<<<<< HEAD
			_delay_ms(500);
			
			PORTD=0x00;
			_delay_ms(500);
=======
			_delay_ms(250);
			
			PORTD=0x00;
			_delay_ms(250);
>>>>>>> LED_Shift_KOREA
    }
}

