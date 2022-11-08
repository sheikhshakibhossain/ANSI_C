#include <stdio.h>
/* Write a program (WAP) that will print following series upto N th terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, ....... */

int main() {
	
	int n, counter=1;
	scanf("%d", &n);

	for (int i=1; i<=n; i++)
	{
		printf("%d", counter);
		if (i != n)
			printf(", ");
		
		if (counter==1)
			counter = 0;
		else
			counter = 1;
	}
	
	return 0;
}

