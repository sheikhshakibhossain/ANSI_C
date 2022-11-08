#include <stdio.h>

int main() {
	
	int n, sum = 0;
	scanf("%d", &n);
	int c = n/2, arr[n][n];

	for (int i=0; i<n; i++) 
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
			if ( (j%2 != 0) || (i%2 != 0) ) 
				sum += arr[i][j];
		}
	}
	printf("%d\n", sum);
	
	return 0;
}

