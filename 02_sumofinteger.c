#include<reg51.h>
void main()
{
	unsigned int i, sum;
	P0=0x00;
	sum=P0;
	
	for(i=1;i<10;i++)
	{
		sum=i+sum;
		P0=sum;
	}
	P1=sum;
}