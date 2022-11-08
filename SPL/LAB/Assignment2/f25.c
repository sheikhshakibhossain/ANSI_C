#include <stdio.h>
void InputMatrix(int arr[][5]);
void ShowMatrix(int arr[][5]);
void ScalarMultiply(int arr[][5], int n);


int main() {
	
	int arr[3][5];
	InputMatrix(arr);
	printf("\nOriginal: \n");
	ShowMatrix(arr); // OK

	int n;
	scanf("%d", &n);
	ScalarMultiply(arr, n);
	printf("\nMultiplied by %d: \n", n);
	ShowMatrix(arr);
	
	return 0;
}

void ScalarMultiply(int arr[][5], int n) {

	for (int i=0; i<3; i++)
		for (int j=0; j<5; j++)
			arr[i][j] *= n;	
}

void ShowMatrix(int arr[][5]) {

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<5; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}
}

void InputMatrix(int arr[][5]) {

	for (int i=0; i<3; i++)
		for (int j=0; j<5; j++)
			scanf("%d", &arr[i][j]);
}
