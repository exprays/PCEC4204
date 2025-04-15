	 #include<lpc214x.h>
#include"delay.h"
#define bit(x) (1<<x)
#define delay for(i=0;i<=60000;i++)

unsigned int i;

int main()
{
    IO0DIR=0xf;                     
    IO0PIN=0;                           
    VPBDIV=0x01;                    
    while(1) {
        /*Forward*/
        IO0SET=bit(0);          
        IO0CLR=bit(1);          
        delay_ms(500);
        /*Off*/
        IO0CLR=bit(0)|bit(1); 
        delay_ms(500);
        /*Reverse*/
        IO0SET=bit(1);          
        IO0CLR=bit(0);          
        delay_ms(500);
        /*Off*/
        IO0CLR=bit(0)|bit(1);
        delay_ms(500);
    }
}