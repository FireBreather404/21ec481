#include<reg51.h>
void main()
{
	unsigned int arr[5]={0x1234, 0x5678, 0x9ABC, 0xDEF0, 0x2468};
	unsigned long int sum=0;
	unsigned char i;
		
		for(i=0;i<5;i++)
		{
			sum=arr[i]+sum;
		}
		P0=sum;
		P1=(sum>>8);
		P2=(sum>>16);
		P3=(sum>>32);
		*((unsigned long*)0x0030)=sum;
	}