#include<reg51.h>
void main()
{
	signed long arr[10]={5,-8,-7,0,-2,3,-1,-4,-6,9};
	unsigned char i, negative;
	
	for(i=0;i<10;i++)
	{
		if(arr[i]<0)
		{
			negative++;
		}
	}
	P0=negative;
}