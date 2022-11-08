#include <stdio.h>
/* Write a program (WAP) that will print following series upto N th terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 ....... */

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i=1; i<=2*n+1; i+=2)
	{
		printf("%d", i);
		if (i != 2*n+1)
			printf(", ");
	}
	
	
	return 0;
}

