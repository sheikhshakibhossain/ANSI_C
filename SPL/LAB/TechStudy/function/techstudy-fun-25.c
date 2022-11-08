#include <stdio.h>
void evenOddSeries(int r1, int r2);

int main() {
	
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	evenOddSeries(r1, r2);
	
	return 0;
}

void evenOddSeries(int r1, int r2) {

	if (r1>r2)
		return;

	printf("%d ", r1);
	evenOddSeries(r1+2, r2);
}