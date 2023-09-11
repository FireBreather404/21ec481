#include<reg51.h>
void main()
{
	unsigned char num=0xCF;
	
	P0=(num%10);
	P1=(num/10)%10;
	P2=(num/10)/10;
}