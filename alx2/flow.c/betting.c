#include <stdio.h>

/**
 * Main - betting
 *
 * return always 0 (success)
 */
 int main(void)

{
	int age;

	printf("Enter your age here:");
	scanf("%d",&age);
	printf("You are %d years old\n",age);

	if(age >=18)
	{
	printf("You are allowed to bet\n");
	}

	else if(age<=0)
	{
	printf("Invalid age\n");
	}

	else
	{
	printf("You are not allowed to bet\n");
	}

	return(0);

}

