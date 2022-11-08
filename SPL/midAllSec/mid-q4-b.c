#include <stdio.h>

int main() {
	
	int n, counter = 0, sum = 0, arr[100]={0};
	scanf("%d", &n);

	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	printf("Index\tVaule\n");
	printf("-----\t-----\n");
	for (int i=0; i<n; i++) 
	{
		printf("%3d\t%4d\n", i, arr[i]);
		if (i%2 != 0) {
			sum += arr[i];
			counter++;
		}
	}
	printf("\nAvarage : %f\n", (float)sum / counter);
	
	return 0;
}

