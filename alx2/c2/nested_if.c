#include <stdio.h>


int main (void)

{
	int n;

	printf("Enter the number here:");

	scanf("%d",&n);
	

	printf("The number is %d\n", n);


	if(n <=5)

	{
	
	if (n ==5)

	{
	printf(" Number is equal to five\n");
	}

	else 
	{
	printf("Number not found\n");
	}

	}

	if(n >=10)

	{

	if (n ==10)

	{
	printf("Number is equal to ten\n");
	}

	else 
	{
	printf("Invalid number\n");
	}

	}

	return(0);

}	


