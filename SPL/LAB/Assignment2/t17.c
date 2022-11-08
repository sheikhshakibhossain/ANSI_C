#include <stdio.h>
void printArray(int arr[], int n);

int main() {
	
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	printArray(arr, n-1); // OK
	
	return 0;
}

void printArray(int arr[], int n) {

	if (n==0) {
		printf("%d ", arr[n]);
		return;
	}
	printArray(arr, n-1);
	printf("%d ", arr[n]);
}
