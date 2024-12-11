#include <stdio.h>

int main()

{
	int r,c;

	printf("Enter number of rows between 1 to 100:");
	scanf("%d", &r);

	printf("Enter number of columns between 1 to 100:");
	scanf("%d", &c);

	int a[r][c];
	int b[r][c];
	int sum[r][c];

	// storing elements of 1st matrix
	
	printf("\nEnter element of 1st matrix:\n\n");

	for(int i=0; i<r; i++)
	{
	for(int j=0; j<c; j++)
	
	{
	printf("Element a%d%d:", i+1,j+1);
	scanf("%d",&a[i][j]);
	}

	}

	// storing elements of 2nd matrix
	
	printf("\nEnter element of 2nd matrix:\n\n");

	for(int i=0; i<r; i++)
	{
	for(int j=0; j<c; j++)
	
	{
	printf("Element b%d%d:",i+1,j+1);
	scanf("%d",&b[i][j]);
	}

	}

	// adding the two matrix
	
	for(int i=0; i<r; i++)
	
	for(int j=0; j<c; j++)

	sum[i][j]=a[i][j]+b[i][j];
	

	printf("\nThe sum of two matrix is:\n\n");

	for(int i=0; i<r; i++)
	{
	for(int j=0; j<c; j++)

	{
	printf("%d\t", sum[i][j]);

	if(j==c-1)
	
		printf("\n\n");

	}

	}

	return (0);

}
