#include <stdio.h>

int choice()
{
    int ch;
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");

    printf("Enter your choice : ");
    scanf("%d", &ch);

    return ch;
}

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    printf("\nBasic Calculator : \n\n");

    printf("Enter first number number : ");
    scanf("%d", &a);

    printf("Enter second number number : ");
    scanf("%d", &b);

    switch (choice())
    {
    case 1:
        printf("Result : %d\n", addition(a, b));
        break;

    case 2:
        printf("Result : %d\n", subtraction(a, b));
        break;

    case 3:
        printf("Result : %d\n", multiplication(a, b));
        break;

    case 4:
        printf("Result : %d\n", division(a, b));
        break;

    default:
        printf("INVALID INPUT\n");
    }

    return 0;
}
