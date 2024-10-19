#include <stdio.h>

/**
 * Main- if and else
 *
 * return: always 0 (sucess)
 */

int main(void)

{
	int age;

	printf("Enter your age here:");
	scanf("%d",&age);
	printf("You are %d years old\n",age);

	if(age >=18)	
	{
	printf("This is my exact age\n");
	}

	else 
	{
	printf("This is not my age.kind regards\n");
	}

	return(0);
}
