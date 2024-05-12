#include<stdio.h>

void string_copy(char *str_result, char *str1)
{
	int i;
	for(i = 0; str1[i] != '\0'; i++)
	{
		str_result[i] = str1[i];
	}
	str_result[i] = '\0';
}


void string_concatenate(char *str_result, char *str2)
{
	int len = sizeof(str_result)/sizeof(str_result[0]);

	int j;
	for(j = 0; str2[j] != '\0'; j++)
	{
		str_result[len+j] = str2[j];
	}
	str_result[len+j] = '\0';
}

int main(){
	char str1[] = "HELLO";
	printf("String 1 : %s\n", str1);

	char str2[] = "WORLD";
	printf("String 2 : %s\n", str2);

	char str_result[30];

	string_copy(str_result, str1);
	printf("Result string where string 1 was copied : %s\n", str_result);

	string_concatenate(str_result, str2); 
	printf("Result string where string 2 was cancatenated : %s\n", str_result);

	return 0;
}