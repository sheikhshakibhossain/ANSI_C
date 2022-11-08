#include <stdio.h>
/* WAP that will take n integers into an array A and m positive integers into array B. Now
find the difference (set operation) of array A and B or (A-B). */

int main() {
	
	int n,m; // npt ready
	scanf("%d", &n);
	int a[n];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	scanf("%d", &m);
	int b[m];
	for (int i=0; i<m; i++)
		scanf("%d", &b[i]);
	
	int x = n;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			if ( a[i] == b[j] ) // A - B
			{
				for (int k=i; k<n; k++)
					a[i] = a[i+1];
				
				x--;
				j--;
			}
		}
	}

	for (int i=0; i<x; i++)
		printf("%d ", a[i]);
	
	return 0;
}

