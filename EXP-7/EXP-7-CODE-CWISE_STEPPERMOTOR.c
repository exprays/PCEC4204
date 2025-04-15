#include <LPC214X.H>
void delay(void);
int main(void)
{	
	
	PINSEL0 = 00; // select the pin function as GPIO
	IODIR0 = (0xF<<4); // Set the port direction P0.4-P0.7 port pins output)
	
	while(1)
	{
		IOCLR0 = 0x60;
		IOSET0 = 0x90;		// 1001
 		delay();

		IOCLR0 = 0x30;
		IOSET0 = 0xC0;		// 1100
		delay();

		IOCLR0 = 0x90;		
		IOSET0 = 0x60;		// 0110
		delay();

		IOCLR0 = 0xC0; 	
		IOSET0 = 0x30;		// 0011
		delay();

	

	

	
	}

}
void delay(void)
{
	int  s;
	for(s = 0;s<=100000;s++)
	{};
}
