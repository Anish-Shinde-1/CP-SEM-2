#include <stdio.h>

int main()
{
    int n, prev = 0, next = 1, sum = 0;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", sum);
        prev = next;
        next = sum;
        sum = prev + next;
    }

    return 0;
}