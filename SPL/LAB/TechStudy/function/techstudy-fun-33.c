#include <stdio.h>
void printArray(int arr[], int n);

int main() {
	
	int n;
	scanf("%d", &n);
	int array[n];
	for (int i=0; i<n; i++)
		scanf("%d", &array[i]);
	
	printArray(array, n-1);
	return 0;
}

void printArray(int arr[], int n) {

	if (n==0) {
		printf("%d ", arr[n]);
		return;
	}
	
	printArray(arr, n-1);
	printf("%d ", arr[n]); // S0: 1 2 3  
}