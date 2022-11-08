#include <stdio.h>

int main() {

	// 6. WAP that will take n integer numbers into an array, and then 
	// find the maximum - minimum among them with its index position.
	int i, n, max = 0, min = 0, maxIndex = 0, minIndex = 0;
	scanf("%d", &n);
	int num[n];

	for (i=0; i<n; i++) {
		scanf("%d", &num[i]);
		// max = num[i] > max ? num[i] : max;
		// maxIndex = num[i] > max ? i : maxIndex;
		// min = num[i] < min ? num[i] : min;
		// minIndex = num[i] < min ? i : minIndex;
		if (num[i] > max) {
			max = num[i];
			maxIndex = i;
		}
		else if (num[i] < max) {
			min = num[i];
			minIndex = i;
		}
	}
	printf("max = %d, index = %d \n", max, maxIndex);
	printf("min = %d, index = %d \n", min, minIndex);

	return 0;
}

