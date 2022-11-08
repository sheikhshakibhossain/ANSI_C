#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	int *ptr;
	ptr = &arr[0];

	for (int i=0; i<n; i++) {
		scanf("%d", ptr);
		ptr++;
	}

	ptr--; // last index addr.
	for (int i=0; i<n; i++) {
		printf("%d ", *ptr);
		ptr--;
	}
	
	return 0;
}
