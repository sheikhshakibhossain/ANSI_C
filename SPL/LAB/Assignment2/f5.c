#include <stdio.h>

void check(int a, int b) {
	if (a==b)
		printf("%d is equal to %d\n", a, b);
	else if (a>b)
		printf("%d is greater than %d\n", a, b);
	else
		printf("%d is less than %d\n", a, b);
}

int main() {
	
	int x,y;
	scanf("%d %d", &x, &y);
	check(x,y); // OK
	
	return 0;
}

