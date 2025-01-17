#include <LPC213X.H>
#include"delay.h"
void wait (void)
{                                       
    long  d;
      for (d = 0; d < 10000; d++)         
      {
          for (d = 0; d < 100000; d++);
    }
}

int main (void)
{
    unsigned int i;                     
      IODIR0 = 0x000000FF;    //PORT1 pin number 0 to 7 are Output Pin               
      while (1)                 //Infinite Loop
      {                                    
        for (i = 1<<0; i < 1<<7; i <<= 1)
        {
              IOSET0 = i;
              delay_ms(50);       //Wait for Some Time
              IOCLR0 = i;
        }
        for (i = 1<<7; i > 1<<0; i >>=1 )
        {             
              IOSET0 = i;
             delay_ms(50);    //Wait for Some Time
              IOCLR0 = i;
        }
    }
}
