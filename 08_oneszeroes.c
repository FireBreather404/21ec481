#include<reg51.h>
void main()
{
	unsigned char*ptr=0x30;
	unsigned char i,j,ones,zeros;
	
	*((unsigned int*)0x30)=0xABCD;
	
	for(i=0;i<2;i++)
		{
			for(j=0;j<8;j++)
			{
			if(*ptr&(1<<j))
				ones++;
			else
				zeros++;
			}
	ptr++;
		}
		P0=zeros;
		P1=ones;
		*((unsigned int*)0x0040)=zeros;
		*((unsigned int*)0x0065)=ones;
	}