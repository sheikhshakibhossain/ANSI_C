#include <stdio.h>

int sumFunc (int array[], int size) {
	int sum = 0;
	for (int i=0; i<size; i++) {
		sum += array[i];
	}
	printf("Sum In Function: %d\n", sum);
	return sum;
	
}

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	int sum = sumFunc(arr, n);
	printf("Sum In Main: %d\n", sum);
	
	return 0;
}

