#include <stdio.h>
#include <math.h>

void check_armstrong(int i)
{
    int digits = 0;
    int temp = i;
    while (temp != 0)
    {
        temp = temp / 10;
        digits++;
    }

    int sum = 0;
    temp = i;
    while (temp != 0)
    {
        int rem = temp % 10;
        temp = temp / 10;
        sum = sum + pow(rem, digits);
    }

    if (i == sum)
    {
        printf("%d, ", i);
    }
}
int main()
{
    printf("Armstrong numbers from 1  to 100 : \n");

    for (int i = 1; i <= 100; i++)
    {
        check_armstrong(i);
    }

    return 0;
}