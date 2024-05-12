#include <stdio.h>
#include <math.h>

void checkprime(int i)
{
    int prime = 1;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            prime = -1;
            break;
        }
    }

    if (prime == 1)
    {
        printf("%d, ", i);
    }
}

int main()
{
    printf("Prime numbers from 1 to 100 : \n");
    printf("2, ");
    for (int i = 3; i <= 200; i++)
    {
        checkprime(i);
    }

    return 0;
}