#include <stdio.h>
#include <math.h>

int POWER(int a, int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return a * pow(a, n - 1);
	}
}

int main()
{
	int base, power;

	printf("Enter the base value : ");
	scanf("%d", &base);

	printf("Enter its power value : ");
	scanf("%d", &power);

	int result = POWER(base, power);
	printf("The answer is  : %d\n", result);

	return 0;
}