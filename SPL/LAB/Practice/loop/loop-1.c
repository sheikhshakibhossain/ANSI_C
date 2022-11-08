#include <stdio.h>
/* Write a program (WAP) that will print following series upto N th terms.
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, ....... */

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		printf("%d", i);
		if (i != n)
			printf(", ");
	}
	
	
	return 0;
}

