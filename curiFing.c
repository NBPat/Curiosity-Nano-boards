// this began as https://github.com/MicrochipTech/Getting_Started_with_GPIO  toggle io but I had to add portf 
#define F_CPU 3333333
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    PORTB.DIR |= PIN5_bm;
    PORTF.DIR |= PIN5_bm;
    while (1)
    {
        PORTB.OUT |= PIN5_bm;
                PORTF.OUT &= ~PIN5_bm;
        _delay_ms(500);
        PORTB.OUT &= ~PIN5_bm;
                PORTF.OUT |= PIN5_bm;
        _delay_ms(500);
    }

    return 0;
}
