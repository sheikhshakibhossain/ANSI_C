#include <stdio.h>

void evenElements(int array[], int size) {
	for (int i=0; i<size; i++) {
		if (array[i]%2==0)
			printf("%d ", array[i]);
	}
}

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	evenElements(arr, n); // OK
	
	return 0;
}

