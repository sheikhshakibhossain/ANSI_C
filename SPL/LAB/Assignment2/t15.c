#include <stdio.h>
int find_lcm(int max, int min);

int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);

	int max = x > y ? x:y;
	int min = x < y ? x:y;

	int lcm = find_lcm(max, min);
	printf("%d\n", lcm); // OK
	
	return 0;
}

int find_lcm(int max, int min) {

	int static multiple = 0;
	multiple += max;

	if ( multiple%max==0 &&multiple%min==0 )
		return multiple;
	else
		return find_lcm(max, min);
}
