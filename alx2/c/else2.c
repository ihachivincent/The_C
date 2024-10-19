#include <stdio.h>

int main(void)

{	
	int age ;
	
	
	printf("Please enter your age here:");
	scanf("%d", &age);

	printf("You are %d years old\n", age);
	
	

	if (age <=0 || age >=129)

	{
	printf("Age not documented at the system\n");
	printf("INvalid age!\n");
	}

	else if (age >=18)
	
	
	{
	printf("you are eligible to vote Sir\n");
	}
	
	else
	
	{
	printf("You are not eligible to vote\n");
	}
	
	
	return(0);
	}
