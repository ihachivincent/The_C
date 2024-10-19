#include <stdio.h>

int main (void)

{
	int a ;

	printf("Enter the number here:");
	scanf("%d",&a);

	if (a <19 || a >87)
	{
	printf("INVALID NUMBER!\n");
	}

	else if (a ==30)
	{	
	printf("Number equal to thirty\n");
	}

	else if (a >30)
	{
	printf("Number greater than thirty\n");
	}

	else 
	{
	printf("Number less than thirty\n");
	}

	return(0);
}

