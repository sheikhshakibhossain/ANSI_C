#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	int max = -9999, maxIndex = 0, min = 9999, minIndex = 0;
	for (int i=0; i<n; i++)
	{
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
	printf("Max: %d, Index: %d\nMin: %d, Index: %d\n", max, maxIndex, min, minIndex);
	
	return 0;
}

