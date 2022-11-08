#include <stdio.h>

int main() {
	
	int n, max = -9999, secondMax, index = -1, maxIndex = -1;
	scanf("%d", &n);
	int arr[n];

	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			secondMax = max;
			index = maxIndex;
			max = arr[i];
			maxIndex = i;
		}
	}

	if (index == -1)
		printf("No Second Largest Number!\n");
	else
		printf("Max: %d, Index: %d\n", secondMax, index); // second max
	
	return 0;
}

