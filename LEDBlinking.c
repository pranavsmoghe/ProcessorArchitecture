#include <xc.h>
void DELAY();
#pragma config PWRT=OFF
#pragma config WDT = OFF
#pragma config DEBUG=OFF, LVP = OFF
void DELAY()
{
	unsigned int i;
	for(int i=0; i<10000; i++);
}

void main(void) {
	TRISDbits.RD0=0x00;
	while(1)
	{
		PORTDbits.RD0=0x01;
		DELAY();
		PORTDbits.RD0=0x00;
		DELAY();
	}
	return;
}
