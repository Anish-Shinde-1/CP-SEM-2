#include<stdio.h>
#include<math.h>

void main ()
{
	int s1,s2,s3;
	float s,a,area;

	printf("\n========= EVALUATION OF TYPE OF TRIANGLE AND ITS AREA =========\n");


	printf("\nEnter the three sides of the triangle : \n");
	printf("\nFirst side : ");
	scanf("%d",&s1);
	printf("\nSecond side : ");
	scanf("%d",&s2);
	printf("\nThird side : ");
	scanf("%d",&s3);


	if((s1+s2)>s3 && (s2+s3)>s1 && (s2+s1)>s2)
	{
		if(s1==s2 && s2==s3)
		{
			printf("\nEquilateral Triangle\n");
		}
		else if(s1==s2 || s2==s3 || s3==s1)
		{
			printf("\nIsosceles Triangle\n");
		}
		else
		{
			printf("\nScalene Triangle\n");
		}
	
		s = (s1+s2+s3)/2.0;
		printf("\nSemiperimeter of the triangle is : %f\n",s);
	
		a = s*(s-s1)*(s-s2)*(s-s3);
		area = pow(a,0.5);
		printf("\nArea of triangle is : %f\n", area);
	}
	else
	{
		printf("\nThe triangle doesn't exist ! \n");
	}
}


