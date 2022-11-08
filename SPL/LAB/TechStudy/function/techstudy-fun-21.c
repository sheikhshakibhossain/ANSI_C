#include <stdio.h>
int pow(int x, int y);

int main() {
	
	int a,b;
	scanf("%d %d", &a, &b);
	int power = pow(a,b);
	printf("%d\n", power);
	
	return 0;
}

int pow(int x, int y) {

	if (y==0) // base case
		return 1;
	
	return x * pow(x, y-1); // y--;    8 == 2* 2^2 
}