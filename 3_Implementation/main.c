

#include <avr/io.h>
#include<util/delay.h>

#include "act1.h"
#include "act3.h"
#include "act2.h"
int main(void)
{
    Buttons_LED_Init(); //Initializing Drivers seat
    ADC_INITIALIZATION(); //Initializing ADC to accept temperature values
    TIMER_INITIALIZATION(); //Initializing Timer by dividing clock with 64 prescale
    USARTinit(103); //Initializing LCD

    uint16_t read;

	while(1)
    {
        if(Buttons_LED_Init)
        {
            PORTD|=(1<<PD2);
            if(HEATER_ON){
              //
                _delay_ms(200);
               // CLEAR_LCD();
                read=SENSE_ADC(0);
                PWM_OUPUT(read);

            }
            else
                {
//                    LED_OFF;
                     _delay_ms(200);
                    HEATER_OFF;
                    _delay_ms(200);
//                    CLEAR_LCD();
                }
        }
        else{
//            LED_OFF;
            _delay_ms(200);
            HEATER_OFF;
            _delay_ms(200);
            CLEAR_LCD();
        }
    }
    return 0;
}
