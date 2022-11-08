#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	int *ptr;
	ptr = &arr[0];

	int sum = 0;
	for (int i=0; i<n; i++) {
		scanf("%d", ptr);
		sum += *ptr;
		ptr++;
	}
	printf("%d\n", sum);
	
	return 0;
}
