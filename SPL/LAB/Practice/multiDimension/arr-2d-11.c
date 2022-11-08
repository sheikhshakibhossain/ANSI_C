#include <stdio.h>

int main() {
	
	int n, max = -9999, index[2];
	scanf("%d", &n);
	int arr[n][n];

	for (int i=0; i<n; i++) 
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > max) {
				max = arr[i][j];
				index[0] = i;
				index[1] = j-1; // j-1 why? should have been j
			}
		}
	}

	printf("\nMax: %d\n", max);
	printf("Location: [%d][%d]\n", index[0], index[1]);		
	
	return 0;
}

