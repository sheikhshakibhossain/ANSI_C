#include <stdio.h>
int* multiplier(int arr[], int n);

int main() {
	
	int n = 5;
	int arr[] = {1,2,3,4,5};

	int *ptr;
	ptr = multiplier(arr, n);

	for (int i=0; i<n; i++) {
		printf("%d ", *ptr);
		ptr++;
	}
	
	return 0;
}

int* multiplier(int arr[], int n) {

	for (int i=0; i<n; i++) {
		arr[i] *= 2;
	}
	return arr;
}