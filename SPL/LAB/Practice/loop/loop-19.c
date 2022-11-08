#include <stdio.h>
/* Write a program (WAP) that will give the sum of first N th terms for the following series.
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, ...... */

int main() {
	
	int n, sum=0;
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++)
	{
		if (i%2==0)
			sum -= i; // when even minus
		else
			sum += i;
	}
	printf("Result: %d\n", sum);
	
	return 0;
}

