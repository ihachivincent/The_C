#include <stdio.h>

void set(int *n)

{
	*n=20;

	printf("Value after setting a is %d\n",*n);

}

int main()               // our *n is acting as place holder which cannot cffect our line of code.any cha can act as place holder eg *b,*n, *m

{
	int a=10;
	int *ptr =&a;

	printf("Value inside a is %d\n",a);
	set(ptr);
	printf("value outside a is %d\n",a);
	
}
