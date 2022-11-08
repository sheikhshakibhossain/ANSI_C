#include <stdio.h>

int main() {
	
	int test;
	scanf("%d", &test);
	int x=0, result[20];

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
			{
				result[x] = j;
				x++;
			}
		}
	}
	for (int j=0; j<x; j++)
			printf("%d ", result[j]);


	return 0;
}

