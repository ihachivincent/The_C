#include <stdio.h>

int main(void)

{
	int age ;

	printf("ENter your age here:");
	scanf("%d", &age);

	printf("You are %d years old\n", age);


	if (age >=140)
	{
	printf("Invalid age\n");
	printf("Please input your correct age\n");
	}


	else if (age <=-0)
	{
	printf("Invalid age\n");
	}
	else if (age >18)
	{
	printf("You are eligible to vote\n");
	}

	else
	{
	printf("You are not eligible to vote\n");
	}

	return(0);

}
