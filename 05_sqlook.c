#include<reg51.h>
void main()
{
	unsigned int arr[10]={1,4,9,16,25,36,49,64,81,100};
	unsigned char num, i;
	
	num=P0;
	for(i=0;i<10;i++)
	{
		if(num==i+1)
		{
			P1=arr[i];
		break;
		}
	}
}