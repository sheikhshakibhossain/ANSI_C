#include <stdio.h>

int sum_array_elements(int arr[], int n)
{
	if (n==0) {
		return arr[n];
	}
	return arr[n] + sum_array_elements(arr, n-1);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	int sum = sum_array_elements(A, n-1); // sending last index
	printf("%d\n", sum);

	return 0;
}
