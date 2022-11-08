#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n][n];

	for (int i=0; i<n; i++) // input
		for (int j=0; j<n; j++) 
		{
			if (i==j)
				arr[i][j] = 1;
			else
				arr[i][j] = 0;
		}
			
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) 
				printf("%d ", arr[i][j]);
		
		printf("\n");
	}
	
	return 0;
}

