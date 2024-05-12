#include<stdio.h>
void main ()
{
	int a,b;

	printf("\n========= COMPARING TWO NUMBERS =========\n");

	printf("\nEnter the value of A : ");
	scanf("%d",&a);
	printf("\nEnter the value of B : ");
	scanf("%d",&b);

	if(a!=b)
	{
		printf("\nA is not equal to B\n");
			if(a>b)
			{
				printf("\nA is greater than B\n");
			}
			else 
			{
				printf("\nB is greater than A\n");
			}
	}
	else 
	{
		printf("\nA is equal to B\n");
	}

}