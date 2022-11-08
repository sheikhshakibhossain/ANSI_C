#include <stdio.h>

void swap (int *x, int *y) { // pass by reference...
	int temp = *x; // x == &a      *x == a      temp er aga * dei nai cuz temp er vitor value thakbe.
	*x = *y;
	*y = temp;
	printf("Value in func:\t%d\t%d\n", *x, *y);
}

int main() {
	
	int a,b;
	scanf("%d %d", &a, &b);
	swap(&a,&b); // sending memory of a,b
	printf("Value in main:\t%d\t%d\n", a,b);
	
	return 0;
}