#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n][n], transpose[n][n];

	for (int i=0; i<n; i++) 
		for (int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);

	for (int i=0; i<n; i++) 
		for (int j=0; j<n; j++)
			transpose[i][j] = arr[j][i];

	int flag = 1;
	for (int i=0; i<n; i++) 
		for (int j=0; j<n; j++) {
			if (arr[i][j] != transpose[i][j])
			flag = 0;
			break;
		}

	if (flag == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}

