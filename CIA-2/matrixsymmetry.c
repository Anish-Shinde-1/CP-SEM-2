#include<stdio.h>	

int main(){

	int n;
	printf("Enter the number of rows and coloums : ");
	scanf("%d", &n);
	int mat[n][n];

	for (int i = 0; i<n; i++) {

		for (int j = 0; j<n; j++) {
				
				printf("Enter the element at (%d,%d) : ", i+1, j+1);
				scanf("%d", &mat[i][j]);
		}
	}
	

	for (int i = 0; i<n; i++) {
		printf("| ");
		for (int j = 0; j<n; j++) {

			printf("%d ", mat[i][j]);
		}
		printf("|\n");
	}	

	for (int i = 0; i<n; i++) {

		for (int j = 0; j<n; j++) {

			if(mat[i][j] == mat[j][i]) {
				continue;
			}

			else {
				printf("The matric is not symmetrical!\n");
				return 0;
			}
		}
	}

	printf("The matrix is symmetrical\n");
	return 0;
}



