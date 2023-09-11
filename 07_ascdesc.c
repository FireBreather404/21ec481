#include<reg51.h>
void main()
{
	unsigned long arr[10]={9,3,6,7,1,0,2,5,8,4};
	unsigned char i,j;
	unsigned long temp;
	
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		P0=arr[i];
	}
}