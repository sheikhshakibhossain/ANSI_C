#include <stdio.h>
int sumOfArray(int array[], int n);

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i=0; i<n; i++) 
		scanf("%d", &arr[i]);
	
	int sum = sumOfArray(arr, n-1); // length 1 kom pathacii... cuz 0 theke start
	printf("%d\n", sum);
	
	return 0;
}

int sumOfArray(int array[], int n) {

	static int sum = 0;
	sum += array[n];
	if (n==0)
		return sum;

	return sumOfArray(array, n-1); // just recursive call
}