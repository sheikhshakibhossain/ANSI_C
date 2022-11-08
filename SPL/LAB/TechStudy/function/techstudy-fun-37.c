#include <stdio.h>
int fibonacciSeries(int n);

int main() {
	
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		int x = fibonacciSeries(i);
		printf("%d ", x);
	}
	
	return 0;
}

int fibonacciSeries(int n) {

	if (n==0 || n==1)
		return n;
	else
		return ( fibonacciSeries(n-2) + fibonacciSeries(n-1) );
}