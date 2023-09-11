#include<reg51.h>
void main()
{
	unsigned char msg[]="Hello World";
	unsigned char i;
	
	SCON=0x50; //Serial Connection Mode 1 8 bit data 1 start 1 stop
	TMOD=0x20; //Timer 1 Mode 2 8 bit auto
	TH1=0xFD; //Set Baud Rate 9600->0xFD
	TR1=1;
	
	for(i=0;i<11;i++)
	{
		SBUF=msg[i];
		while(TI==0);
			TI=0;
	}
}