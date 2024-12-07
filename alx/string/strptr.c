#include <stdio.h>

int main()

{
	char str[17] = "vincent@gmail.com";
	
	char *ptr = str;

	for(int i ; ptr[i] ; i++)

	{
	printf("address of str[%d]=%p\n",i, ptr+i);
	}

	return(0);
}

