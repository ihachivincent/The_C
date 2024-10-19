#include <stdio.h>


int main()

{

	int n,m; //*a n represent number of students and m represents marks given out* //
	int marks[m];
	int sum;

	printf("Enter the number of students:");
	scanf("%d",&n);

	for(m=0; m<n; m++)
	
	{
		printf("Enter the marks of student%d:",m+1); // we can also say  printf("enter the marks of students:"); alone which will NOT print the following results >>Enter the marks of student1 ,Enter the marks of student2,,,and so on the reason for student%d and i+1 is to print the number of students continually plus the marks gotten by each student according to total number of students givenn out \\

		scanf("%d",&marks[m]);

		sum+=marks[m];
	}

	printf("The sum of marks is %d\n", sum);

	return(0);

}

	
