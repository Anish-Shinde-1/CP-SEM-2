#include<stdio.h>
#include<string.h>

int main(){

	char string[20];
	printf("Enter a string : ");
	scanf("%s", &string);

	int len = strlen(string);
	int i;

	for(i = 0; i < len; i++)
	{
		if(string[i] == string[len-i-1])
		{
			continue;
		}
		else
		{
			printf("The entered string is not a palindrome!\n");
			return 0;
		}
	}

	printf("The entered string is a palindrome!\n"); 
	return 0;

}