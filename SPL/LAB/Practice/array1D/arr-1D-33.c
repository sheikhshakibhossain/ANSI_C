#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n][n], sum=0, check=n/2;

	for (int i=0; i<n; i++) // input
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i==check || j==check || (j==0 && i>check) || (j==n-1 && i<check) || (i==0 && j<check) || (i==n-1 && j>check))
				sum += arr[i][j]; 
		}
	}
	printf("%d\n", sum);
	
	return 0;
}

