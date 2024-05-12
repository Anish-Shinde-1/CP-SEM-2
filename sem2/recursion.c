#include <stdio.h>
#include <math.h>

int x_raised_to_y(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y == 1)
    {
        return x;
    }
    else
    {
        return x * x_raised_to_y(x, y - 1);
    }
}

int fibo(int n)
{
    int sum = 0;
    if (n == 1)
    {
        return sum;
    }
    else if (n == 2)
    {
        return sum + 1;
    }
    else
    {
        sum = fibo(n - 1) + fibo(n - 2);
        return sum;
    }
}

void factor(int num, int divisor)
{
    if (divisor > num / 2)
    {
        return;
    }
    if (num % divisor == 0)
    {
        printf("%d, ", divisor);
    }

    factor(num, divisor + 1);
}

int sumofn_numbers(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number + sumofn_numbers(number - 1);
    }
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int reversed(int n, int sum)
{
    int last_digit, remaining_digits;
    if (n >= 0 && n <= 9)
    {
        return sum * 10 + n;
    }

    last_digit = n % 10;

    remaining_digits = n / 10;

    sum = reversed(remaining_digits, (sum * 10) + last_digit);

    return sum;
}

int main()
{
    // int x, y;
    // printf("Enter the value of x : ");
    // scanf("%d", &x);

    // printf("Enter the value of y : ");
    // scanf("%d", &y);

    // printf("Ans : %d", x_raised_to_y(x, y));

    // ---------------------------------------------------------------

    // int n;
    // printf("Enter the number of terms : ");
    // scanf("%d", &n);

    // printf("Fibonachi series : \n");
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d, ", fibo(i));
    // }

    // ---------------------------------------------------------------

    // int num;
    // printf("Enter the number : ");
    // scanf("%d", &num);

    // factor(num, 1);

    // ---------------------------------------------------------------

    // int number;

    // printf("Enter the number of numbers : ");
    // scanf("%d", &number);

    // printf("Sum of first %d numbers : %d", number, sumofn_numbers(number));

    // ---------------------------------------------------------------

    // int numero;
    // printf("Enter the number : ");
    // scanf("%d", &numero);

    // printf("Factorial of  %d is : %d", numero, factorial(numero));

    // ---------------------------------------------------------------

    int numb;
    printf("Enter the number : ");
    scanf("%d", &numb);

    printf("Reversed number is : %d\n", reversed(numb, 0));

    return 0;
}