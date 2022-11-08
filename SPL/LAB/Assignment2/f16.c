#include <stdio.h>
void multiBy2Array(int arr[], int n);  
void multiBy2Array_why(int *arr, int n);

int main() {
										
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	printf("\n");
	multiBy2Array(arr, n); // OK
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");

	multiBy2Array_why(arr, n);  // OK
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

void multiBy2Array(int arr[], int n) { // i really don't know which one is correct... 

	for (int i=0; i<n; i++) {
		arr[i] = arr[i] * 2;
	}
}										// Note: Both of them is correct

void multiBy2Array_why(int *arr, int n) {

	for (int i=0; i<n; i++) {
		*arr = *arr * 2;
		arr++; // changing the pointer index,,,     ex: now changing pointer arr[0] to arr[1]
	}
}
