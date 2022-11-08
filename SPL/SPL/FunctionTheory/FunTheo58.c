#include <stdio.h>
int getGcd(int a, int b);

int main() {

	int x,y;
	scanf("%d %d", &x, &y);
	int gcd = getGcd(x,y);
	printf("%d\n", gcd);
	
	return 0;
}


int getGcd(int a, int b) {

	int max = a>b ? a:b;
	int min = a<b ? a:b;
	while (max % min != 0) {
		int temp = min;
		min = max % min;
		max = temp;
	}
	return min;
}