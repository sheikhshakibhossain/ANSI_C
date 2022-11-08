#include <stdio.h>

void revPrintArr(int *ptr, int size) {

	for (int i=0; i<size; i++) {

		printf("%d ", *ptr);
		ptr--; 
	}
}

void revArr2(int arr[], int size) {

	for (int i=size-1; i>=0; i--)
		printf("%d ", arr[i]);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	revPrintArr(&arr[n-1], n);
	//revArr2(arr, n);
	
	return 0;
}