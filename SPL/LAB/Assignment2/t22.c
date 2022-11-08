#include <stdio.h>
int max_of_array(int arr[], int n);
int min_of_array(int arr[], int n);

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	int max = max_of_array(arr, n-1);
	int min = min_of_array(arr, n-1);

	printf("%d\n", max); // OK
	printf("%d\n", min);
	
	return 0;
}


int min_of_array(int arr[], int n) {

	static int min = 9999;

	if (n == 0) {

		if (arr[n] < min)
			min = arr[n];

		return min;
	}

	if (arr[n] < min)
		min = arr[n];
	
	min_of_array(arr, n-1);
}


int max_of_array(int arr[], int n) {

	static int max = -9999;

	if (n == 0) {

		if (arr[n] > max)
			max = arr[n];

		return max;
	}

	if (arr[n] > max)
		max = arr[n];
	
	max_of_array(arr, n-1);
}
