#include <stdio.h>
int multiBy2Array(int arr[], int n);  

int main() {
										
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	multiBy2Array(arr, n); // works but it shoudn't be
	//arr = multiBy2Array (&arr, n);
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

int multiBy2Array(int arr[], int n) {

	for (int i=0; i<n; i++) {
		arr[i] = arr[i] * 2;
	}
	// for (int i=0; i<n; i++)
	// 	printf("%d ", arr[i]);
	// printf("\n");

	return arr;
}