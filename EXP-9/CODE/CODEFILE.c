#include <lpc214x.h> 
void Delay(int); 			//Delay Routine
void SupDelay(int); 		//Delay Routine

void main()
{
	PINSEL2 = 0X00000000; // P1.24 TO P1.31 as GPIO
	IO0DIR = 0X0000FFF0; // p1.24 TO P1.31 Configured as Output port.

	while(1)
	{

		IO0SET=0x00003090;	  
		Delay(500);

		IO0CLR=0x00001000;
		
		IO0SET=0x00002890;	  
		SupDelay(100);

		IO0CLR=0x000002890;
		Delay(1);

		IO0SET=0x00008490;	  
		Delay(500);

		IO0CLR=0x00008000;

		IO0SET=0x00004490;
		SupDelay(100);

		IO0CLR=0x00004490;
		Delay(1);

		IO0SET=0x000024C0;   
		Delay(500);

		IO0CLR=0x00000040;

		IO0SET=0x000024A0;
		SupDelay(100);

		IO0CLR=0x000024A0;
		Delay(1);

		IO0SET=0x00002610;	
		Delay(500);

		IO0CLR=0x00000200;


		IO0SET=0x00002510;
		SupDelay(100);

		IO0CLR=0x00002510;
		Delay(1);
		
		
	}
}

void Delay(int n)
{
	int p,q;

	for(p=0;p<n;p++)
	{
		for(q=0;q<0xFFF0;q++);
	}
}

void SupDelay(int n)
{
	int p,q;

	for(p=0;p<n;p++)
	{
		for(q=0;q<0xFFF0;q++);
		for(q=0;q<0xFFF0;q++);
	}
} 
