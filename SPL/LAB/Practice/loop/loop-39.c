#include <stdio.h>

int main() {
	
	int n, sum=0, total=0;
	scanf("%d", &n);

	for (int i=1; i<=n; i++) {
		sum = sum*10 + i;
		total += sum;
	}
	printf("%d\n", total);
	
	return 0;
}

