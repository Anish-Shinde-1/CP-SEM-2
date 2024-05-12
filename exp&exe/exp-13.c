#include<stdio.h>

void fibo(int n);

void main()
{
	int n;

	printf("\n========= FIBONACCI SERIES =========\n");

	printf("\nEnter a the number fo terms in the series : ");
	scanf("%d",&n);

	fibo(n);
}

void fibo(int n)
{
	int i, a=0, b=1, c=0;

	printf("\nFibonacci series for first %d terms : \n",n);

	for(i=0; i<n; i++)
	{
		printf("%d, ", c);
		a=b;
		b=c;
		c=a+b;
	}
}