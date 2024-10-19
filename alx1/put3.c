#include  <stdio.h>

int main(void)

{

	char i, j;

	i= 'a';
	
	while(i <='z')
	{
	putchar(i);
	i++;
	}

	j= 'A';

	while (j<='Z')
			
	{
	putchar(j);
	j++;
	}
	
	putchar('\n');

	return(0);

}
