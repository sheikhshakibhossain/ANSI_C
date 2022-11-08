#include <stdio.h>

int get_max(int arr[], int n)
{
	static int get_max_tmp = -9999;
	if (arr[n] > get_max_tmp) {
		get_max_tmp = arr[n];
	}
	if (n==0) {
		return get_max_tmp;
	}
	get_max(arr, n-1);
}

int get_min(int arr[], int n)
{
	static int get_min_tmp = 9999;
	if (arr[n] < get_min_tmp) {
		get_min_tmp = arr[n];
	}
	if (n==0) {
		return get_min_tmp;
	}
	get_min(arr, n-1);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	int max = get_max(A, n-1); 
	int min = get_min(A, n-1); 
	printf("Max: %d\nMin: %d\n", max, min);

	return 0;
}
