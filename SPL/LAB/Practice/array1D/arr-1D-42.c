#include <stdio.h>

int main() {
	
	int m,n, sum=0;
	scanf("%d %d", &m, &n);
	int arr[m][n];

	for (int i=0; i<m; i++) 
	{
		for (int j=0; j<n; j++) 
		{
			scanf("%d", &arr[m][n]);
			sum += arr[m][n];
		}
	}

	printf("%d\n", sum);

	return 0;
}

