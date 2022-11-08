#include <stdio.h>

int main() {
	
	int n, arr[n];
	scanf("%d", &n);
	int *p = arr;

	for (int i=0; i<n; i++) {
		scanf("%d", p+i); // ehene valo kore dakh bolod,,, p holo addr + (i==value, 1 for char, 4 for int)
	}

	for (int i=0; i<n; i++) {
		printf("%d ", *(p+i)); // dhorlam p = 200, i=1 | *p+i == 200+1 | *(p+i) == (200+1*4) == 204
	}

	return 0;
}