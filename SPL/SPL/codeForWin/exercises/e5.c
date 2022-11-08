#include <stdio.h>

int sum_of_array(int arr[], int index, int limit)
{
	if ( index >= limit ) {
		return 0;
	}
	return arr[index] + sum_of_array(arr, index+1, limit);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int sum = sum_of_array(&arr[0], 0, n); // (arr, index, limit)
	printf("%d\n", sum);
	
	return 0;
}
