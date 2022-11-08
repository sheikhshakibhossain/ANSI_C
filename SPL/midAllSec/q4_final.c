#include <stdio.h>

int main() {
	
	int test;
	scanf("%d", &test);
	int result[44][100] = {0}; // 44 weeks & assuming at most 100 codes per week

	for (int i=0; i<test; i++) // test case
	{
		int n, r1,r2;
		scanf("%d", &n);
		int arr[n];

		for (int j=0; j<n; j++) // codes in weeks
			scanf("%d", &arr[j]);

		scanf("%d %d", &r1, &r2);
		for (int j=r1; j<=r2; j++) //search
		{
			if ( arr[j] > 10 )
				result[i][j] = j;
		}
	}

	for (int i=0; i<test; i++)  // output for test case times
	{
		for (int j=0; j<100; j++) 
		{
			if (result[i][j] != 0)
				printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}

