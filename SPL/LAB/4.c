#include <stdio.h>

int main() {

	int size;
	scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size; i++) {

		scanf("%d", &arr[i]);
		if (arr[i] % 3 == 0) arr[i] = -1; 
	}
	for(int i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

