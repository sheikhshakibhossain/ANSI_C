#include <stdio.h>

int main() {

	int size, max = -999999, maxIndex, min = 999999, minIndex;
	scanf("%d", &size);
	int arr[size];
	for (int i=0; i<size; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}

	}
	printf("max: %d, Index: %d \n", max, maxIndex);
	printf("min: %d, Index: %d \n", min, minIndex);

	return 0;
}

