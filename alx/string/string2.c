#include <stdio.h>

int main()

{
	char str[15] = "vincent abukuse";

	

	for(int n=0; str[n]; n++)

	{

	printf("address of str[%d]=%p\n",n, str+n);

	}

	return(0);
}


