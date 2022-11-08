#include <stdio.h>

int main() {
	
	int m,n;
	scanf("%d %d", &m, &n);
	int arr[m][n];

	for (int i=0; i<m; i++) // in
		for (int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);

	printf("\nRow-wise: ");
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			printf("%d ", arr[i][j]);
	
	printf("\nColumn-wise: ");
	for (int j=0; j<n; j++)
		for (int i=0; i<m; i++)
			printf("%d ", arr[i][j]);
	
	return 0;
}

