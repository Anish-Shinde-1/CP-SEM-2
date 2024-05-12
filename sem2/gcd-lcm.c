#include <stdio.h>

// int retarded_gcd(int a, int b)
// {
//     int gcd = 1;
//     if (b % a == 0)
//     {
//         gcd = a;
//         return gcd;
//     }
//     for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             gcd = i;
//         }
//     }

//     return gcd;
// }

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int lcm(int a, int b)
{
    return ((a * b) / gcd(a, b));
}

int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    printf("GCD of two numbers is : %d\n", gcd(a, b));

    printf("LCM of two numbers is : %d\n", lcm(a, b));

    return 0;
}