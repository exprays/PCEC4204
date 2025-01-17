void delay_us(unsigned int count)
{
  volatile unsigned int j,k;
  for (j=0;j<count;j++) 
	{
    for (k=0;k<10;k++) 
		{
       __asm
			{
                nop;
      }
    }
  }
}
void delay_ms(unsigned int count)
{
  volatile unsigned int j,k;
  for (j=0;j<count;j++) 
	{
   	for (k=0;k<6000;k++) 
		{
       __asm
			{
                nop;
                nop;
      }
    }
  }
}
