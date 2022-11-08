#include <stdio.h>

typedef struct {
	int feet;
	float inch;
} Distance;

int main() {
	
	Distance x,y,sum;
	scanf("%d %f", &x.feet, &x.inch);
	scanf("%d %f", &y.feet, &y.inch);

	sum.feet = x.feet + y.feet;
	sum.inch = x.inch + y.inch;
	
	while ( sum.inch > 12 ) {
		sum.feet++;
		sum.inch -= 12;
	}
	printf("%d feet %.2f inches\n", sum.feet, sum.inch);

	return 0;
}
