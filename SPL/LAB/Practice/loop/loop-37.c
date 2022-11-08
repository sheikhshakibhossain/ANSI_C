#include <stdio.h>
int power(int x, int y);
int fac(int x);

int main() {
	
	int n;
	float sinx = 0;
	for (int i=1; i<=n; i++)
	{
		// what about 2 ?
	}
	
	return 0;
}

// custom functions
int power(int x, int y) {
	int pow = 1;
	for (int i=1; i<=y; i++)
		pow *= x;
	
	return pow;
}

int fac(int x) {
	int fac = 1;
	for (int i=1; i<=x; i++)
		fac *= i;
	
	return fac;
}

