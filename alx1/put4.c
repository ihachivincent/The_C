#include <stdio.h>

int main(void)

{
	char i, j;

	i = 'a';


	while(i <='m')

	{
	putchar(i);
	i++;
	}

	j = i = 'N';

	while( j<='Z')

	{
	putchar(j);
	j++;
	}

	putchar('\n');

	return(0);

}
