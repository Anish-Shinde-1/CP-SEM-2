#include <stdio.h>

void string_copy(char *destination, char *source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }

    destination[i] = '\0';
}

void string_concatenate(char *destination, char *source)
{
    int dest_len = 0;
    int i;
    for (i = 0; destination[i] != '\0'; i++)
    {
        dest_len++;
    }
    printf("current length of destination string : %d\n", dest_len);

    for (i = 0; source[i] != '\0'; i++)
    {
        destination[dest_len + i] = source[i];
    }

    destination[dest_len + i] = '\0';
}

int string_length(char *destination)
{
    int count = 0;
    int i;
    for (i = 0; destination[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char source[30];
    char destination[300];

    printf("Enter the source string : ");
    scanf("%29s", source);

    do
    {
        printf("\n[1] Copy string to destination string\n");
        printf("[2] Concatenate string to destination string\n");
        printf("[3] Find the length of the string\n");
        printf("[4] Exit\n");
        printf("\n Enter your option : ");
        int option;
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            string_copy(destination, source);
            printf("String has be copied to desitnation string!\n");
            printf("After copying : %s\n", destination);
            break;

        case 2:
            string_concatenate(destination, source);
            printf("String has be concatenated to desitnation string!\n");
            printf("After concatenation : %s\n", destination);
            break;

        case 3:
            int length = string_length(destination);
            printf("The length of destination string is : %d", length);
            break;

        case 4:
            return 0;
        }
    } while (1);
}