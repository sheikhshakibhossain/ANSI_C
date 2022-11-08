#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	scanf("%d", &n);
	n = sqrt(n);
	int arr[n][n];

	for (int i=0; i<n; i++) // in
		for (int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
	
	for (int i=0; i<n; i++) // out
	{
		for (int j=0; j<n; j++)
			printf("%d ", arr[i][j]);
		
		printf("\n");
	}

	return 0;
}

