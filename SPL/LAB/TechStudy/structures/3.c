#include <stdio.h>

typedef struct {
	int hr;
	int min;
	int sec;
} Time;

int main() {
	
	Time start, end, diff;
	scanf("%d %d %d", &start.hr, &start.min, &start.sec);
	scanf("%d %d %d", &end.hr, &end.min, &end.sec);

	diff.hr = end.hr - start.hr;
	diff.min = end.min - start.min;
	diff.sec = end.sec - start.sec;
	printf("%d hr, %d min, %d sec\n", diff.hr, diff.min, diff.sec);

	return 0;
}
