#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n], rev[n], k = n - 1;

	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]); //scan and reverse
		rev[k] = arr[i];
		k--;
	}
	
	printf("Array A : "); // print elements of A
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);

	printf("\n");

	printf("Array B : "); // print elements of B
	for (int i=0; i<n; i++) 
		printf("%d ", rev[i]);
		
	printf("\n");

	
	return 0;
}

