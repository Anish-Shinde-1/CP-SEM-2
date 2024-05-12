#include<stdio.h>
void main ()
{
	int a,b,c;

	printf("\n========= SWAPPING TWO NUMBERS USING THREE VARIABLES =========\n");

	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);

	printf("\nBefore Swapping : \n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);

	c=a;
	a=b;
	b=c;

	printf("\nAfter Swapping Swapping : \n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);

}