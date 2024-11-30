#include <stdio.h>

int main()

{
	int arr[5] = {10,20,30,40,50};
	
	int i;

	for(i =0; i<5; i++)

	{
	printf("Address of arr[%d] =%p\n", i, arr+i); // we can also use &arr[i] in our printf statement which will bring same results \\

	}

	return(0);

}
