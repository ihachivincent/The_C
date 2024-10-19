#include <stdio.h>

/**
 * Main- switch statements
 *
 * return always 0 (sucess)
 */
int main(void)


{
	char grade;

	printf("Enter your grade to see remarks from the lecturer:");
	scanf("%c",&grade);

	switch (grade)

	{
	case 'A':
	printf("Excellent student\n");
	break;

	case 'B':
	printf("Good student\n");
	break;

	case 'C':
	printf("Average student\n");
	break;

	case 'D':
	printf("Try another day\n");
	break;

	default:
	printf("No remarK\n");

	}	
	
	return(0);

}

	
