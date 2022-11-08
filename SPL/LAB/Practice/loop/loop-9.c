#include <stdio.h>
/* Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print the
square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If and
when X is equal to Y, the program prints “Reached!” */

int main() {
	
	int x,y;
	scanf("%d %d", &x, &y);
	
	while (x != y)
	{
		printf("%d,", x*x);
		if (x < y)
			x++;
		else if (x>y)
			x--;
	}
	printf("Reached!\n");
	
	return 0;
}

