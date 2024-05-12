#include<stdio.h>

int checkprime(int n)
{
	for (int i = 2; i<n; i++)
	{
		if(n%i==0)
		{
			printf("The integer is not prime\n");
			return 0;
		}
	}

	return 1;
}

int main(){

	int n;
	printf("Enter the number : ");
	scanf("%d", &n );

	if(checkprime(n) == 1)
	{
		printf("The integer is prime\n");
	}
	return 0;
}