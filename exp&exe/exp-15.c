#include <stdio.h>

void main()
{
	int n, i, a[100], large;

	printf("\n========= LARGEST NUMBER ENTERED =========\n");

	printf("\nEnter the number of elements : ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("\nEnter a value : ");
	    scanf("%d", &a[i]);
	}

	large = a[0];

	for(i=1; i<=n; i++)
	{
		if(large<a[i])
			{ large = a[i]; }
	}

	printf("\nThe largest number is %d", large);
}