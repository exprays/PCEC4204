#include <LPC214X.H>

int main(void)
{   
    // select the pin function as GPIO
    PINSEL0 = 00;

    // Set the port direction (P0.3 as input)
    // P0.3 connected to EXINT1 key
    IODIR0 = (0<<3);

        // make P0.12 as GPIO   ( connected to Relay 1 )
       // make it as output
    IODIR0 = (1<<12);

    while(1)
    {   
        if(IOPIN0 & 0x00000008)  // Test P0.3 key
        {   
            IOCLR0 = 0x00001000; // Relay1 off                     
        }
        else
        {
						IOSET0 = 0x00001000; // Relay1 on        
				}
    }  
}

