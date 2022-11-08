#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int matrix[n][n], transpose[n][n];

	for (int i=0; i<n; i++) // scan
		for (int j=0; j<n; j++)
			scanf("%d", &matrix[i][j]);
	
	for (int i=0; i<n; i++) // transpose
		for (int j=0; j<n; j++)
			transpose[j][i] = matrix[i][j];

	int flag = 1;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
		{
			if (matrix[i][j] != transpose[i][j]) {
				flag = 0;
				break;
			}
		}

	if (flag == 1)
		printf("Yes\n");
	else
		printf("No\n");

	
	return 0;
}

