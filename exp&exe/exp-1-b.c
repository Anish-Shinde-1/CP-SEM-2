#include<stdio.h>
void main ()
{
	int a,b;

	printf("\n========= SWAPPING TWO NUMBERS WITHOUT USING THIRD VARIABLE =========\n");

	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);

	printf("\nBefore Swapping : \n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);

	a=(a+b);
	b=(a-b);
	a=(a-b);

	printf("\nAfter Swapping Swapping : \n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);

}