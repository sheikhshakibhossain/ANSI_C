#include <stdio.h>

void print_even_odd(int r1, int r2);
int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);
	print_even_odd(x, y);
	
	return 0;
}

void print_even_odd(int r1, int r2)
{
	if (r1>r2) {
		return;
	}
	printf("%d ", r1);
	print_even_odd(r1+2, r2);
}