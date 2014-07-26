#include <avr/io.h>
#include <util/delay.h>

void blink(void) {

    DDRD  = _BV(PB7);

    while(1) {

        PORTD |= _BV(PB7);
        _delay_ms(500);
        PORTD &= ~_BV(PB7);
        _delay_ms(500);
    }
}
