#include<reg51.h>
void main()
{
	unsigned int a=0xFF01, b=0xEE83;
	unsigned char a0, a1, b0, b1;
	unsigned long pp1, pp2, pp3, pp4, sum1, sum2, product;
	
	{
		a0=a;
		a1=a>>8;
		b0=b;
		b1=b>>8;
		
		pp1=a0*b0;
		pp2=a1*b0;
		pp3=a0*b1;
		pp4=a1*b1;
		
		sum1=pp1+(pp2<<8);
		sum2=pp3+(pp4<<8);
		product=sum1+(sum2<<8);
	}
	
	P0=product;
	P1=(product>>8);
	P2=(product>>16);
	P3=(product>>24);
	
	*((unsigned int*)0x0070)=product;
}