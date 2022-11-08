#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n][n], sum=0;

	for (int i=0; i<n; i++) // input
	{
		for (int j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
			if ( i%2 !=0 || j%2 !=0 )
				sum += arr[i][j]; // conditions
		}
	}
	printf("%d\n", sum);
	
	return 0;
}

