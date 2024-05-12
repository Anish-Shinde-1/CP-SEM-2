#include<stdio.h>

void main()
{
	int n, i, flag=1;

	printf("\n========= DETERMINE IF PRIME OR NOT =========\n");

	printf("\nEnter integer number : ");
	scanf("%d",&n);

	for(i=2;i<n;++i)
	{
		if(n%i==0)
		{
			flag=0; 
			break;
		}
	}

	if(flag==1)
	{
		printf("Prime number : %d", n);
	}
	else
	{
		printf("Not a prime number : %d", n);
	}


}