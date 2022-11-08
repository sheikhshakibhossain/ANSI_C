#include <stdio.h>

void reverse(int array[], int size) {

	for (int i=size-1; i>=0; i--)
		printf("%d ", array[i]);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	reverse(arr, n); // OK
	
	return 0;
}

