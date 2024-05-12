#include <stdio.h>
#include <math.h>

int main()
{
    float A, P, R, n;

    printf("Enter the principle amount : ");
    scanf("%f", &P);

    printf("Enter the rate of interest : ");
    scanf("%f", &R);

    printf("Enter the number of years : ");
    scanf("%f", &n);

    A = P * pow((1 + (R / 100)), n);

    printf("Compound interest for the given details : %.3f", A);
    return 0;
}
