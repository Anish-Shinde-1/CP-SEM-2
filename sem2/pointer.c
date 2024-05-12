#include <stdio.h>

void add(int *ptr1, int *ptr2, int *ptr3); // call by reference

int main()
{
    int a = 5;
    int b = 10;
    int sum = 0;

    add(&a, &b, &sum);

    printf("SUM OF A AND B : %d", sum);
    return 0;
}

void add(int *ptr1, int *ptr2, int *ptr3)
{
    *ptr1 = 25;
    *ptr3 = *ptr1 + *ptr2;
}

// int addition(int x, int y); // call by value

// int main()
// {
//     int a = 5;
//     int b = 10;
//     int sum = addition(a, b);

//     printf("SUM OF A AND B : %d", sum);
//     return 0;
// }

// int addition(int a, int b)
// {
//     int sum = x + y;
//     return sum;
// }
