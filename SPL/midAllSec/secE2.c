#include <stdio.h>

int main() {
	
	int n, sumMain=0, sumOposite=0;
	scanf("%d", &n);
	int arr[n][n];

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i==j)
				sumMain += arr[i][j];
			if (i+j == n-1)
				sumOposite += arr[i][j];
		}
	}
	printf("\nMain diagonal: %d\n", sumMain);
	printf("Opposite diagonal: %d\n", sumOposite);
	
	return 0;
}

