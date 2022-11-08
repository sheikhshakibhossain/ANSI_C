#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 3 == 0) // replacing divisible by 3 with -1
			arr[i] = -1;
	}

	for (int i=0; i<n; i++) // output
		printf("%d ", arr[i]);
	
	return 0;

}

