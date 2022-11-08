#include <stdio.h>
int sumOfNatural(int r1, int r2);

int main() {
	
	int r1, r2;
	scanf("%d %d", &r1, &r2);

	int sum = sumOfNatural(r1, r2);
	printf("%d\n", sum);
	
	return 0;
}

int sumOfNatural(int r1, int r2) {

	if (r1==r2)
		return r1;
	
	return r1 + sumOfNatural(r1+1, r2);
}