#include <stdio.h>

int get_gcd(int max, int min)
{
	if (min==0) {
		return max;
	}
	get_gcd(min, (max%min));
}

int main() {
	
	int a,b, gcd;
	scanf("%d %d", &a, &b);
	if (a>b) {
		gcd = get_gcd(a, b);
	}
	else {
		gcd = get_gcd(b, a);
	}
	printf("%d\n", gcd);

	return 0;
}
