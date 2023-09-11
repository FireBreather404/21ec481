#include<reg51.h>
void main()
{
	unsigned char arr[32]={30,2,4,6,8,10,12,14,16,18,20,22,24,26,28,29,31,34,36,38,40,45,50,55,70,44,56,60,52,63,62,43};
	unsigned char big, less, i;
	
	big=arr[0];
	less=arr[0];
	
	for(i=0;i<32;i++)
		{
			if(arr[i]>big)
				big=arr[i];
			if(arr[i]<less)
				less=arr[i];
		}
		P0=big;
		P1=less;
	}