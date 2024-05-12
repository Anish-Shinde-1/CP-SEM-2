#include <stdio.h>
#include <math.h>

void main() {
    int n, m, sum = 0;

    printf("\n========= DETERMINATION OF ARMSTRONG NUMBER =========\n");

    printf("\nEnter integer number : ");
    scanf("%d", &n);

    m = n;

    while (n != 0) {
        printf("Current digit: %d\n", n % 10);
        sum = sum + pow(n % 10, 3);
        printf("Current sum: %d\n", sum);
        n = n / 10;
    }

    if (sum == m) {
        printf("Armstrong number : %d\n", m);
    } else {
        printf("\nNot an Armstrong number : %d\n", m);
    }
}