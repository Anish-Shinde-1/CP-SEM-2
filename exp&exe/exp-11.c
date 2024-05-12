#include<stdio.h>

void main()
{
int a, b, r, m, n;

	printf("\n========= GCD AND LCM =========\n");

	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("Enter Second Number : ");
	scanf("%d",&b);
	
	m=a;
	n=b;
	
	if(a<b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	
	do
	{
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);

	printf("\nGCD of the two numbers is : %d\n",a);
	printf("LCM of the two numbers is  : %d\n\n",(m*n)/a);
}