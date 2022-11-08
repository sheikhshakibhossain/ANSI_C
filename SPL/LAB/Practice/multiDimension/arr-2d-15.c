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
			if ( i==c || j==c || (i==0 && j<c) || (i==n-1 && j>c) || (j==n-1 && i<c) || (j==0 && i>c) ) 
				sum += arr[i][j];
		}
	}
	printf("%d\n", sum);
	
	return 0;
}

