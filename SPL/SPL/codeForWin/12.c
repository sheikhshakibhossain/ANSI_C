#include <stdio.h>

void print_even_odd(int r1, int r2)
{
	if (r1 > r2) {
		return;
	}
	printf("%d ", r1);
	print_even_odd(r1+2, r2);
}

int main() {
	
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	print_even_odd(r1, r2);
	
	return 0;
}
