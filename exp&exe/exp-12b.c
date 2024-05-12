#include<stdio.h>

void main()
{ 
	int i, num, sum = 0;

	printf("\n========= CONTINUE =========\n");
	
	for (i=1; i<= 10; ++i)
	{
		printf("\nEnter integer number : ");
		scanf("%d",&num);
		
		if(num<0) 
		{ 
			continue; 
		}
		
		sum += num;
	}
	
	printf("\nFinal sum is : %d\n", sum);
}