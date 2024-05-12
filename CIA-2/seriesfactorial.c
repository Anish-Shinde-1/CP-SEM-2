#include<stdio.h>

float factorial(float i)
{
	if(i==1)
	{
		return 1;
	}

	else
	{
		return (i * factorial(i-1));
	}
}

void main()
{
	float n;
	printf("enter the number of terms : ");
	scanf("%f", &n);

	float sum = 0;

	for(float i = 1; i<=n; i++)
	{
		sum = sum + ((i)/factorial(i));\
		printf("For n = %f, sum = %f\n", i, sum);
	}
}

