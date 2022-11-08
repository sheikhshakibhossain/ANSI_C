#include <stdio.h>

int main() {

	int t=2;
	
	int arr[t][2];

	for (int i=0; i<2; i++)
		for (int j=0; j<2; j++)
			arr[i][j] = 0;

	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		printf("%d ", arr[i][j]);

		printf("\n");
	}
	
	
	return 0;
}

