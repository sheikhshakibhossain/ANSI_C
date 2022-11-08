#include <stdio.h>

int largest_of_array(int arr[], int n);
int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	int x = largest_of_array(arr, n-1);
	printf("%d\n", x);
	
	return 0;
}

int largest_of_array(int arr[], int n)
{
	static int largest = -9999;
	if (arr[n] > largest) {
		largest = arr[n];
	}
	if (n==0) {
		return largest;
	}
	largest_of_array(arr, n-1);
}