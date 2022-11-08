#include <stdio.h>

void swap (int x, int y) {
	int temp = x;
	x = y;
	y = temp;
	printf("Value in func:\t%d\t%d\n", x, y);
}

int main() {
	
	int a,b;
	scanf("%d %d", &a, &b);
	swap(a,b);
	printf("Value in main:\t%d\t%d\n", a,b); // OK
	
	return 0;
}
