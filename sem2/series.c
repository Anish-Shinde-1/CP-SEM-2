#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

float cosine(int degree)
{
    float radian = degree * (PI / 180);
    float sum = 1;
    float sign = -1;

    for (int i = 2; i <= 20; i += 2)
    {
        sum = sum + ((sign) * (pow(radian, i) / fact(i)));
        sign = sign * -1;
    }

    return sum;
}

float sine(int degree)
{
    float radian = degree * (PI / 180);
    float sum = radian;
    float sign = -1;

    for (int i = 3; i <= 20; i += 2)
    {
        sum = sum + ((sign) * (pow(radian, i) / fact(i)));
        sign = sign * -1;
    }

    return sum;
}

float series_xfactbyx(int n)
{
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum = sum + (fact(i) / i);
    }

    return sum;
}

float series_xbyxplus1(int n)
{
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum = sum + (((2 * i) - 1) / (2 * i));
    }
    return sum;
}

float series_x_rasiesd_to_x(int n)
{
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum = sum + pow(i, i);
    }

    return sum;
}

float series_xbynfact(int x, int n)
{
    float sum = 0;
    float sign = 1;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + ((sign) * ((float)(x) / fact(i)));
        sign = sign * -1;
    }

    return sum;
}

int main()
{
    // float degree;
    // printf("Enter the degrees : ");
    // scanf("%f", &degree);

    // printf("cos(%.0f) = %f\n", degree, cosine(degree));

    // printf("sin(%.0f) = %f\n", degree, sine(degree));

    int n;
    int x;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("The sum of x!/x till %d terms is : %f\n", n, series_xfactbyx(n));

    printf("The sum of 2x-1/2x till %d terms is : %f\n", n, series_xbyxplus1(n));

    printf("The sum of x^x till %d terms is : %f\n", n, series_x_rasiesd_to_x(n));

    printf("Enter a number  : ");
    scanf("%d", &x);

    printf("The sum of x/n! for x = %d till %d terms is : %f\n", x, n, series_xbynfact(x, n));

    printf("The sum of x^x till %d terms is : %f\n", n, series_x_rasiesd_to_x(n));

    return 0;
}