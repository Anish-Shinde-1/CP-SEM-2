#include<stdio.h>

int GCD(int a, int b){

	if(b==0) {
		return a;
	}
	
	return GCD(b, a%b);
}

int LCM(int a, int b, int gcd) { 
	
	return (a*b)/gcd;
}
int main(){
	int a, b;
	printf("Enter the two numbers : ");
	scanf("%d %d", &a, &b);

	if(a<b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int gcd = GCD(a,b);
	int lcm = LCM(a,b,gcd);

	printf("The GCD of two number is : %d\n", gcd);
	printf("The LCM of two number is : %d\n", lcm);

	return 0; 
}