#include<stdio.h>

void main()
{
	int n, i, j, fact;
	float sum=0.0;

	printf("\n========= CALCULATE SUM OF SERIES =========\n");

	printf("\nSum of how many terms? : ");
	scanf("%d",&n);

	for(i=1;i<=n;++i)
	{
		fact=1;

		for(j=1;j<=i;++j)
		{
			fact = fact * j;
		}
		sum = sum + (1.0/fact);
		printf("\nIteration number %d : ", i);
		printf("%f\n",sum);
	}

	printf("\nSum of series is : %f\n", sum);

	
}