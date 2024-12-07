#include <stdio.h>

int main()

{
	char str[26]= "vincentabukuse@gmail.com";

	char*ptr=str;

	for(int i=0; ptr[i]; i++)
	{
	printf("char for str[%d]=%c\n",i, ptr[i]);
	}

	return(0);

}

