#include <stdio.h>

void input_matrix(int matrix[][5], int row, int col)
{
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element at (%d, %d) : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int matrix[][5], int row, int col)
{
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        printf("| ");
        for (int j = 0; j < col; j++)
        {
            printf("%2d ", matrix[i][j]);
        }

        printf(" |\n");
    }
    printf("\n");
}

void check_symmetry(int matrix[][5], int row, int col)
{
    if (row != col)
    {
        printf("The matrix is not symmetrical\n");
        return;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                printf("The matrix is not symmetrical\n");
                return;
            }
        }
    }

    printf("The matrix is symmetrical\n");
}

void transpose(int matrix[][5], int row, int col)
{
    if (row != col)
    {
        return;
    }

    int temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    print_matrix(matrix, row, col);
}

int sumof_diagonal_elements(int matrix[][5], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + matrix[i][i];
    }

    return sum;
}

int main()
{
    int row, col;

    printf("Enter the rows in the matrix : ");
    scanf("%d", &row);

    printf("Enter the coloums in the matrix : ");
    scanf("%d", &col);

    int matrix[5][5];

    input_matrix(matrix, row, col);

    printf("\nOriginal matrix : \n");
    print_matrix(matrix, row, col);

    check_symmetry(matrix, row, col);

    transpose(matrix, row, col);

    printf("Sum of the diagonal elements of the matrix is : %d\n", sumof_diagonal_elements(matrix, row, col));
}