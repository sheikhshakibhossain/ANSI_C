#include <stdio.h>
int sum(int a, int b, int c, int d); // proto

int main() {
	
	int x = sum(5,3,2,0);
	printf("%d", x);
	
	return 0;
}

int sum(int a, int b, int c, int d) {
	int sum = a+b;
	return sum;
}
