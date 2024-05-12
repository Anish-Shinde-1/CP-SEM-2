#include<stdio.h>
#include<math.h>

void main ()
{
	int n, r, factn=1, factr=1, factnmr=1, i, npr, ncr;

	printf("\n========= PERMUTATION AND COMBINATION =========\n");

	printf("\nEnter the value of N : ");
	scanf("%d",&n);
	printf("Enter the value of R : ");
	scanf("%d",&r);

	for(i=1;i<=n;++i)
	{
		factn = factn * i;
	}

	for(i=1;i<=r;++i)
	{
		factr = factr * i;
	}

	for(i=1;i<=n-r;++i)
	{
		factnmr = factnmr * i;
	}

	npr = factn/factnmr;
	ncr = npr/factr;

	printf("\nPermutation value : %d\n",npr);
	printf("Combination value : %d\n",ncr);
}