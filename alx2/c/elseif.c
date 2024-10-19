#include <stdio.h>

int main(void)

{	
	int age;


	printf("Enter your age here please:");
	scanf("%d", &age);
	printf("You are %d years old\n", age);

	if(age >18)
	{
	printf("you are eligible to vote\n");
	}

	else if(age <18)
	{
	printf("You are not eligible to vote\n");
	}

 	return(0);


}

	
