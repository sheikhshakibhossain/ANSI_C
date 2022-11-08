#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int k = n / 2;
	int arr[n][n];

	for (int i=0; i<n; i++) // scan
	{
		for (int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
	}

	int sum = 0;
	for (int i=0; i<n; i++) //sum
	{
		for (int j=0; j<n; j++)
		{
			if ( j==k || i==k || (i==0&&j<k) || (i==n-1 &&j>k) || (j==0&&i>k) || (j==n-1 &&i<k) )
				sum += arr[i][j];
		}
			
	}
	printf("%d\n", sum);

	return 0;
}

