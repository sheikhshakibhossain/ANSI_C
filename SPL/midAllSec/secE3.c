#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int num = n;
	int k = 0;
	int arr[2*n-1][2*n-1], last = 2*n - 2; // 4 --> 7 ---> 0---6

	for (int i=0; i<=last; i++)
	{
		for(int j=0; j<=last; j++)
		{
			if (i==k)
				for (j=)
				arr[i][j] = num;
			else arr[i][j] = 0;
		}
		k++;
		num--;
	} 

	for (int i=0; i<=last; i++)
	{
		for(int j=0; j<=last; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	return 0;
}

