#include <stdio.h>
int find_lcm(int x, int y);

int main() {
	
	int x, y, lcm;
	scanf("%d %d", &x, &y);
	if (x>y)
		lcm = find_lcm(y,x);
	else
		lcm = find_lcm(x,y);
	printf("%d\n", lcm); 
	
	return 0;
}

int find_lcm(int x, int y) {

	static int multiple = 0; // why static int ?
	multiple += y;
	if ( multiple%x==0 && multiple%y==0 )
		return multiple;
	else
		return find_lcm(x,y);
}