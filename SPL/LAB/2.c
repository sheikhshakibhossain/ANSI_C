#include <stdio.h>

int main() {

	int i,n,sum=0;
	int first, last;
	scanf("%d", &n);
	printf("1");
	for (i=1; i<=n; i++) {
		first = 1, last = 1;
		if (i%2 != 0) {
			first = i;
			//sum = sum + i;
			if (i != 1) printf(" + %d", i);
			
		}
		else {
			last = i;
			//sum = sum * i;
			printf(" X %d", i);
		}
		sum = sum + (first*last);
			
	}
	printf(" = %d", sum);

	return 0;
}

