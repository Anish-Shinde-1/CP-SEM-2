#include<stdio.h>

void input(int *arr, int n){
	int i;
	for(i = 0; i<n; i++) {
		printf("Enter element number %d : ", i+1);
		scanf("%d", &arr[i]);
	}
}

int Largest(int *arr, int n) {

	int j;
	for(j = 0; j<n-1; j++) {

		if(arr[j]>arr[j+1]) {
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp; 
		}
	}

	return arr[j];
}

int main(){
	int i, j, n;

	printf("Enter the number of terms in the array : ");
	scanf("%d", &n);

	int arr[n];

	input(arr, n);

	int largest = Largest(arr, n);
	printf("the largest element in that in the array is : %d\n", largest);

	return 0;
}