#include <stdio.h>

void print_array_elements(int arr[], int n)
{
	if (n==0) {
		printf("%d ", arr[n]);
		return;
	}
	print_array_elements(arr, n-1);
	printf("%d ", arr[n]);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	print_array_elements(A, n-1); // sending last index

	return 0;
}
