#include<stdio.h>

int main(){
	int i, j, n;

	printf("Enter the number of terms in that array : ");
	scanf("%d", &n);

	int arr[n];

	for(i = 0; i<n; i++) {
		printf("Enter element number %d : ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("Array before sorting : \n");
	for(i = 0; i<n; i++) {
		printf(" %d ", arr[i]);
	}
	printf("\n");

	for(i = 0; i<n-1; i++) {

		for(j = 0; j<n-i-1; j++) {

			if(arr[j]>arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}

	printf("Array after sorting : \n");
	for(i = 0; i<n; i++) {
		printf(" %d ", arr[i]);
	}
	printf("\n");

	return 0;

}