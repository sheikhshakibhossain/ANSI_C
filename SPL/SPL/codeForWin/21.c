#include <stdio.h>

int get_gcd(int max, int min)
{
	if (min==0) {
		return max;
	}
	get_gcd(min, (max%min));
}

int get_lcm(int a, int b)
{
	int gcd;
	if (a>b) {
		gcd = get_gcd(a, b);
	}
	else {
		gcd = get_gcd(b, a);
	}
	return (a*b) / gcd;
}

int main() {
	
	int a,b, lcm;
	scanf("%d %d", &a, &b);
	lcm = get_lcm(a,b);
	printf("%d\n", lcm);

	return 0;
}
