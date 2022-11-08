#include <stdio.h>
void InputMatrix(int arr[10][10], int m, int n);
void ShowMatrix(int arr[10][10], int m, int n);
void ScalarMultiply(int arr[10][10], int m, int n, int multiple);


int main() {
	
	int m,n;
	scanf("%d %d", &m, &n);
	int arr[m][n];

	InputMatrix(arr, m, n);
	printf("\nOriginal: \n");
	ShowMatrix(arr, m, n); // OK

	int multiple;
	scanf("%d", &multiple);
	ScalarMultiply(arr, m, n, multiple);
	printf("\nMultiplied by %d: \n", multiple);
	ShowMatrix(arr, m, n);
	
	return 0;
}

void ScalarMultiply(int arr[10][10], int m, int n, int multiple) {

	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			arr[i][j] *= multiple;	
}

void ShowMatrix(int arr[10][10], int m, int n) {

	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}
}

void InputMatrix(int arr[10][10], int m, int n) {

	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &arr[i][j]);
}
