#include <stdio.h>

/**
 * main -nested for loop
 *
 * return always 0 (sucess)
 */

int main(void)

{	

	for(int n=1; n<=4; nr++)

	{

	printf("start of outerloop %d\n", n);

	for(int z=0; z<=5; z++)
	{
	printf("inner loop %d\n",z);
	}

	printf("end of outer loop %d\n", n);

	}

	return(0);

}

	
