#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/*betty stlye code for function main goes there*/

int main(void)

{
	int n;


        srand (time (0));

        n = rand() - RAND_MAX/2;

	int y;

	y= n%10;

	if (y >5)

	{
	printf("The last digit of %d is %d and is greater than 5\n", n, y);
	}
	
	else if(y ==0)

	{
	printf("The last digit of %d is %d and is equal to 0\n", n, y);
	}

	else 
	{
	printf("The last digit of %d is %d and is less than 6 not 0\n", n, y);
	}

	return(0);

}

