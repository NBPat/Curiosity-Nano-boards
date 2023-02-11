/* Intro to MPLAB X IDE mu.microchip.com/intro-to-the-mplab-x-ide */
/* deluxe version */
#include <xc.h>
#pragma config WDTE = OFF
#define _XTAL_FREQ 2000000      // need to add this, from exec version
#define OFF 0
#define ON 1
// forward decs
void delayOneSecond(void);
void init(void);
void setLED(int state);
//vars
int numBlinks = 5;

void main(void) {
    init();

    while (1) {
        LATF &= 0xF7;
        __delay_ms(800);
        LATF |= 0x08;
        __delay_ms(300);
        return;
    }
}
// init

void init(void) {
    ANSELF &= 0xF7;
    TRISF &= 0xF7;
}
//setLED

void setLED(int state) {
    if (state == ON)LATF &= 0xF7;
    else LATF |= 0x08;
}
// delayOneSecond

void delayOneSecond(void) {
    __delay_ms(1000);
}