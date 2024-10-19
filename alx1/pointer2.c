#include <stdio.h>

int main()

{
	int a =10;

	int*ptr=&a;

	
	printf("%d\n",a);
	printf("%d\n",*ptr); // *we use *ptr to check the value assigned in our memory address*\\

	printf("%p\n",&a); // will give memory value into floata//

	printf("%p\n",ptr+1);
	return 0;

}
