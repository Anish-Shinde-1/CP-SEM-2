#include<stdio.h>

void main()
{
	int n, reverse=0;

	printf("\n========= REVERSE THE DIGITS OF A NUMBER =========\n");

	printf("\nEnter integer number : ");
	scanf("%d",&n);

	printf("\nOriginal number : %d \n", n);

	while(n!=0)
	{
		reverse=(reverse*10)+(n%10);
		n=n/10;
	}

	printf("\nReversed number : %d\n",reverse);

}