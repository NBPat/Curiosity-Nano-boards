/* https://github.com/MicrochipTech/Getting_Started_with_GPIO
 */


#define F_CPU 3333333
#include <avr/io.h>
#include <util/delay.h>

void main(void) {   PORTB.DIR |= PIN5_bm;
while(1){
    PORTB.OUT |= PIN5_bm;
    _delay_ms(400);
     PORTB.OUT &= ~PIN5_bm;
    _delay_ms(1200);   
}
    return;
}
