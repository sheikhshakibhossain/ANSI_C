#include <stdio.h>

int fibonacci(int n);
int main() {
	
	int a;
	scanf("%d", &a);
	for (int i=0; i<=a; i++)
	{
		int term = fibonacci(i);
		printf("%d ", term);
	}
	
	return 0;
}

int fibonacci(int n) 
{
	if (n==0)
		return 0;

	else if (n==1)
		return 1;
	
	return ( fibonacci(n-1) + fibonacci(n-2) );
}