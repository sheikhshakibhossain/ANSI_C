#include <stdio.h>
int find_gcd(int max, int min);

int main() {
	
	int x,y;
	scanf("%d %d", &x, &y);

	int max = x > y ? x:y;
	int min = x < y ? x:y;
	int gcd = find_gcd(max, min);
	printf("GCD: %d\n", gcd);
	
	return 0;
}

int find_gcd(int max, int min) {

	if (min==0)
		return max;

	return find_gcd(min, max%min);
}