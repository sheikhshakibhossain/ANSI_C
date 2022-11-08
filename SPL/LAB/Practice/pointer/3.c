#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	int *ptr = arr;

	for (int i=0; i<n; i++) {
		scanf("%d", ptr);
		ptr++;
	}
	ptr = arr;

	for (int i=0; i<n; i++) {
		printf("%d ", *ptr);
		ptr++;
	}

	return 0;
}
