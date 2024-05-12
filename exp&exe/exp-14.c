#include <stdio.h>

int fact(int no);

void main()
{
    int no, factorial;

    printf("\n========= FACTORIAL CALCULATOR =========\n");

    printf("\nEnter the number : ");
    scanf("%d", &no);

    factorial = fact(no);

    printf("\nFactorial is : %d\n", factorial);
}

int fact(int no)
{
    if (no == 1)
        return 1;
    else
        return (no * fact(no - 1));
}