#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n], rev[n];

	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	int k=0;
	for (int i=n-1; i>=0; i--)
	{
		rev[k] = arr[i];
		k++;
	}

	for (int i=0; i<n; i++)
		printf("%d ", rev[i]);


	
	return 0;
}

