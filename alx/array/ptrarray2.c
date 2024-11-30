#include <stdio.h>

int main()

{

	int arr[5] = {10,20,30,40,50};

	int i;
	
	int*ptr =arr;


	for(i=0; i<5; i++)
	{

	{
	printf("Value of arr[%d]=%d\n",i, ptr[i]);
	}
	
	}


	*(ptr+3)=100;

	{
	printf("The final Value of arr[3] is %d\n", arr[3]);
	}
	
	
	return(0);

}
