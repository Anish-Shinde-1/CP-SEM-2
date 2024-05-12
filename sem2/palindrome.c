#include <stdio.h>
#include <string.h>

int main()
{
    char number[20];

    printf("Enter the number : ");
    scanf("%s", number);

    int len = strlen(number);

    for (int i = 0; i < len / 2; i++)
    {
        if (number[i] == number[len - i - 1])
        {
            continue;
        }

        printf("The entered number is not a palindrome!\n");
        return 0;
    }

    printf("The entered number is a palindrome!\n");
    return 0;
}