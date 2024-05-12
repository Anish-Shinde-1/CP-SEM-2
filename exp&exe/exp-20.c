#include<stdio.h>

void call_by_value (int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	printf("After swapping a and b inside a call by value function,\na = %d and b = %d\n", a, b);
}

void call_by_reference (int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a;
	int b;

	printf("Enter the value of A : ");
	scanf("%d", &a);

	printf("Enter the value of B : ");
	scanf("%d", &b);

	printf("Before swapping, a = %d and b = %d\n", a, b);
	call_by_value(a,b);

	printf("The value of a and b in main is, a = %d and b = %d\n", a,b);

	call_by_reference(&a, &b);
	printf("After swapping a and b inside a call by reference function\nvalue of a and b in main function is : a = %d and b = %d\n", a, b);

	return 0;
}

