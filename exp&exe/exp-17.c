#include<stdio.h>

int main() {
	char line[150];
	int i, len = 0, vowel = 0, consonants = 0, digits = 0, spaces= 0;

	printf("Enter a string : ");
	fgets(line, sizeof(line)-1, stdin);

	while (line[len]  != '\0') {
		len++;
	}

	for(i = 0; i < len; i++) {

		if(line[i] >= '0' && line[i] <= '9')
		{
			digits++;
		}
		else if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
		{
			vowel++;
		}
		else if(line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
		{
			vowel++;
		}
		else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
		{
			consonants++;
		}
		else if (line[i] == ' ')
		{
			spaces++;
		}
	}

	printf("Vowels : %d\n", vowel);
	printf("Consonants : %d\n", consonants);
	printf("Digits : %d\n", digits);
	printf("Spaces : %d\n", spaces);

	return 0;
}