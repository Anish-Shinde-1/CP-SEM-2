#include<stdio.h>
#include<math.h>

void main()
{
	int x, m, num=0;

	printf("\n========= DETERMINATION OF ARMSTRONG NUMBER =========\n");

	printf("\nEnter integer number : ");
	scanf("%d",&x);

	m=x;

	while(x!=0)
	{
		num=num+pow(x%10,3);
		x=x/10;
	}

	if(num==m)
	{
		printf("Armstrong number : %d\n", m);
	}
	else
	{
	printf("\nNot an Armstrong number : %d\n",m);
	}
}