#include <stdio.h>

float average(float q[]);

int main()
{
	float avg,n[]={23.4,43.5,67.8,12.3,90.2,76.3};
	avg=average(n);

	printf("The average sum is %.2f\n",avg);
	
	return(0);  // q[] and w[] are reffered to us as place holder which do not have any impact to our lines of code.any char can be a place holder

	}


float average(float d[])
{
	float avg,sum=0.0;
	for(int i=0;i<6;i++)
	{
	sum+=d[i];
	}
	avg=(sum/6);

		return avg;

}
