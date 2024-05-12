#include <stdio.h>
#include <stdlib.h>

void main() {
    int no1, no2, result, choice;

    printf("\n========= ARITHMETIC CALCULATOR =========\n");

    do {
        printf("\nEnter first number : ");
        scanf("%d", &no1);
        printf("Enter second number : ");
        scanf("%d", &no2);

        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = no1 + no2;
                printf("Sum = %d\n", result);
                break;
            case 2:
                result = no1 - no2;
                printf("Difference = %d\n", result);
                break;
            case 3:
                result = no1 * no2;
                printf("Product  %d\n", result);
                break;
            case 4:
                result = no1 / no2;
                printf("Quotient = %d\n", result);
                break;
            case 5:
                result = no1 % no2;
                printf("Remainder = %d\n", result);
                break;
            case 6:
                exit(0); 
        }

    } while (choice != 6);

}