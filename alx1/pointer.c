#include <stdio.h>

void set(int *b) // we can also reassign  our void with any variable latter, it wont affect our code since  our int*a or int*b is our place holder to the integer pointer carring our memory address int*ptr/&a  which is carrying our value 10 ,we derefference our value in our &a which is *b which we assigned new value of 20. The assigning of new value to our memory address in known as hard coding//

{
	*b=20;

	printf("set value is %d\n",*b);

}

int main()
{
	int a=10;
	int*ptr=&a;

	printf("value inside a %d\n",a);

	set(ptr); //*we can do away with (int*ptr=&a) and set(ptr) as  set(&a); and our code will still work as indended//


	printf("value of a after setting %d\n",a);

	return 0;

}


