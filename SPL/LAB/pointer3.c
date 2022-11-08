#include <stdio.h>

void printArr(int *ptr, int size) {

	for (int i=0; i<size; i++) {

		printf("value of arr[%d] is %d\n", i, *ptr);
		ptr++; // pointer arithmetic
	}
}

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printArr(&arr[0], n);
	
	return 0;
}