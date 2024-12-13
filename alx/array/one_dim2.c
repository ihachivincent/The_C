#include <stdio.h>

float average(float a[]);

int main()
{
	float avg, c[]={22.4,45.6,45.9,21.4,56,8,12.5,67.90};
	avg =average(c);
	printf("The avarge sum is %.2f\n", avg);

	return (0);

}


float average(float a[])

{


	float avg,sum =0.0;

	for(int i=0; i<8; i++)
	{
	sum+=a[i];
	}
	
	avg=(sum/8);

	return avg;
}

