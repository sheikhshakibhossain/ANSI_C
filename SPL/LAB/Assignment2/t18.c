#include <stdio.h>
int sumArray(int arr[], int n);

int main() {
	
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	int sum = sumArray(arr, n-1);
	printf("%d\n", sum); // OK
	
	return 0;
}

int sumArray(int arr[], int n) {

	static int sum = 0;
	if (n<0)
		return sum; // sum calculations completes here

	sum += arr[n];	
	return sumArray(arr, n-1);
}
