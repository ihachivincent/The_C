#include <stdio.h>

int main()

{
	int arr[5] = {10,20,30,40,50};
	int i;

	for(i =0; i<5; i++)

	{
	printf("value of arr[%d]=%d\n", i, *(arr+i)); // we can also say arr[i] in pur printf statement which will bring same results //

	}

	return(0);

}

