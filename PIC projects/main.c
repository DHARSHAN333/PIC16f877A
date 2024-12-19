

#include <xc.h>
#define _XTAL_FREQ 20000000

void main(void) {
    
    TRISB=0x00;// all port b as output;
    while(1){
        PORTB=0x00;// set port b off
        __delay_ms(1000);
        
        PORTB=0xFF;
        __delay_ms(1000);
    }
    return;
}
