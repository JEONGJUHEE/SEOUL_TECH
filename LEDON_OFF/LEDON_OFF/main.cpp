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
<<<<<<< HEAD
		for(int i=0; i<8;i++){
			PORTD &= ~(1<<i);
			_delay_ms(400);
		}
			PORTD=0xff;

			_delay_ms(500);
			
			PORTD=0x00;
			_delay_ms(500);

			

=======
			for(int i=0; i<8;i++){
				PORTD &= ~(1<<i);
				_delay_ms(100);
			}
>>>>>>> LED_Shift_KOREA
    }
}

