#include <stdio.h>


void vincent(int *b)
{
	      *b=20;


        printf("value of a is %d\n",*b);
        printf("value of a is %d\n",*b); // we could have placed *a instead  or even *c then, why this because our *b=*c and also equal to *a.They act as place holder of our memory address(&a)
//therefore palce holder can be any variable, it wont affect our output at the end 
}

int main()
{
	int a =10;
		
	int*ptr=&a;

	printf("value of a is %d\n", a);
	printf("value of a is %d\n", *ptr);
	vincent(&a);
			
	

	return 0;


}
