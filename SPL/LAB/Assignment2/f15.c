#include <stdio.h>

int minElement(int arr[], int n) {
	int min = 9999;
	for (int i=0; i<n; i++) {
		if (arr[i] < min) 
			min = arr[i];
	}
	return min;
}

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	int min = minElement(arr, n); // OK
	printf("Minimum Value: %d\n", min);
	
	return 0;
}
