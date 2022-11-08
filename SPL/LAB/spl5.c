#include <stdio.h>

int main() {

	/*
		5
		1 2 3 4 5
		Given Array : 1 2 3 4 5 
		Reverse Array : 5 4 3 2 1 
		sum = 15 
	*/
	int size, sum = 0;
	scanf("%d", &size);
	int arr[size];
	for (int i=0; i<size; i++) {
		scanf("%d", &arr[i]);
		if (i%2 == 0) // sum of even indices
			sum += arr[i];
	}
			
	printf("Given Array : ");
	for (int i=0; i<size; i++) 
		printf("%d ", arr[i]);
	
	printf("\nReverse Array : ");
	for (int i=size-1; i>=0; i--) 
		printf("%d ", arr[i]);
	
	printf("\nsum = %d ", sum);

	return 0;
}

