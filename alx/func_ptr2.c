#include <stdio.h>


void replace_odd_even(int*array, size_t size)

{
	for(int i=0; i<size; i++)
	{
		if(array[i]%2==0)
		{
		array[i]=0;
		}

		else
		{
		array[i]=1;
		}
	}

}

void print_array(int*array, size_t size)

{
	printf("[\n");

	for(int i=0; i<size; i++)
	{

	printf("%d\n",array[i]);

	if(i<size-1)
	{
	printf(", ");
	}
	
	}
	printf("]\n");

}


void modify_array(int*array, size_t size, void(*func_ptr)(int*,size_t))

{
	if(array!=NULL && func_ptr!=NULL)
	func_ptr(array, size);

}


int main(void)

{
	int array[]={1,2,3,4,5,6,7,8};
	size_t size=sizeof(array)/sizeof(int);

	printf("This is the original array:\n");
	print_array(array,size);

	printf("Modified array:\n");
	modify_array(array, size,replace_odd_even);
	print_array(array,size);

	return 0;

}


