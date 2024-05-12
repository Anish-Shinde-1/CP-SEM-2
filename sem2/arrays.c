#include <stdio.h>

void input_array(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %d : ", i + 1);
        scanf("%d", &array[i]);
    }
}

void print_array(int *array, int n)
{
    printf("\n[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n\n");
}

void ascending(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void descending(int *array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int largest(int *array, int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        if (array[j] > array[j + 1])
        {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }

    return array[n - 1];
}

int smallest(int *array, int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        if (array[j] < array[j + 1])
        {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }

    return array[n - 1];
}

int main()
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    int array[n];
    input_array(array, n);
    printf("\nOriginal order : ");
    print_array(array, n);

    ascending(array, n);
    printf("Ascending order : ");
    print_array(array, n);

    descending(array, n);
    printf("Descending order : ");
    print_array(array, n);

    printf("The largest element in the array : %d\n\n", largest(array, n));

    printf("The smallest element in the array : %d\n", smallest(array, n));
}