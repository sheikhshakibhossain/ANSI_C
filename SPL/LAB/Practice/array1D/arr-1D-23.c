#include <stdio.h>
/* WAP that will take n integers into an array A. Now sort them in ascending order within
that array. Finally show all elements of array A. */

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if ( arr[i] > arr[j] )
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i=0; i<n; i++) // output
		printf("%d ", arr[i]);
	
	return 0;
}

