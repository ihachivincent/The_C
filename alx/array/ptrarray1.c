#include <stdio.h>

int main()

{
	int arr[5] = {10,20,30,40,50};
        int i;

        int*ptr=arr;

        for(i=0; i<5;i++)
	
	{
	printf("Value of arr[%d]=%d\n",i, ptr[i]);  // Remember ptr[i] = *(ptr+i) = *(arr+i) = arr[i] all will work under function pointer//
	}

	return(0);

}
