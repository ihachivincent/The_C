#include <stdio.h>

int main()

{
	int arr[5]={10,20,30,40,50};
	int i;

	int*ptr=arr;

	int n= sizeof(arr)/sizeof(int);

	for(i=0;i<n; i++)
	{
	printf("Value of arr[%d]=%d\n", i, ptr[i]);
	}

	return(0);

}



