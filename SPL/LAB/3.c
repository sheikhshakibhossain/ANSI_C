#include <stdio.h>

int main() {

	int n, num, k=0;
	scanf("%d", &n);
	int arr[n], index[n];

	for (int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &num);
	for (int i=0; i<n; i++) {
		if (arr[i] == num) {
			index[k] = i;
			k++;
		}

	}
	for(int i=0; i<n; i++) {
		if (index[i] != 0)
			printf("%d", i);
		if (i<n-1)
			printf(",");

	}

	return 0;
}

