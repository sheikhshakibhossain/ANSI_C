#include <stdio.h>

int main() {
	
	int n, fac=1;
	scanf("%d", &n);

	for (int i=n; i>0; i--)
	{
		if (i==n) 
			printf("%d! = ", n);
		printf("%d", i);
		if (i != 1) 
			printf(" X ");
		fac *= i;
	}
	printf(" = %d\n", fac);
	
	return 0;
}

