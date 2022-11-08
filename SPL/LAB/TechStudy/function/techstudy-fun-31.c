#include <stdio.h>
int find_hcf(int x, int y);

int main() {
	
	int x, y, lcm;
	scanf("%d %d", &x, &y);

	int hcf = find_hcf(x,y);
	printf("%d\n", hcf);
	
	return 0;
}

int find_hcf(int x, int y) {

	if (y==0)
		return x;
	
	find_hcf(y, x%y);
}