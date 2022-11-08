#include <stdio.h>

int main() {

	// 18. check if the triangle can be formed or not from value of angles
	int x,y,z,area;
	scanf("%d %d %d", &x, &y, &z);
	if ( x+y+z == 180 && x > 0 && y > 0 && z > 0 ) // no angle can be 0
		printf("valid triangle");
	else
		printf("triangle not valid");

	return 0;
}

