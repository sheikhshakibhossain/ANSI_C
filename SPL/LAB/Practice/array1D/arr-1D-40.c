#include <stdio.h>

int main() {
	
	int m,n;
	scanf("%d %d", &m, &n);
	int arr[m][n];

	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &arr[m][n]);
	
	for (int i=0; i<m; i++)
	{
		for (int j=; j<n; j++)
		{
			for (int k=j+1; k<n; k++)
			{
				if (arr[i][j] == arr[i][k])
					arr[i][j] = -1;
			}
		}
	}

	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) 
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	return 0;
}

