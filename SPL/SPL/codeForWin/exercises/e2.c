#include <stdio.h>

int get_gcd(int max, int min)
{
	if (min == 0) {
		return max;
	}
	return get_gcd( min ,(max%min) );
}

int main() {
	
	int x,y;
	scanf("%d %d", &x, &y);

	int gcd;
	if (x>y) {
		gcd = get_gcd(x, y);
	}
	else {
		gcd = get_gcd(y, x);
	}
	printf("%d\n", gcd);
	
	return 0;
}
