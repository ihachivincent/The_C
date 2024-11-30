#include <stdio.h>

int main()

{
	int arr[5] = {10,20,30,40,50};
	int i;

	int*ptr=arr;

	for(i=0; i<5;i++)
	
	{
	printf("Address of arr[%d]=%p\n", i, &ptr[i]);     // remember ptr+i = arr+i = &arr[i] = &ptr[i], all these will work under function pointer//
	}							  
	
	
       	

	return(0);

}
