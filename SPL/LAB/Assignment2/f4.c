#include <stdio.h>

void check(int n) {
	if (n==0)
		printf("zero\n");
	else if (n>0)
		printf("positive\n");
	else
		printf("negative");
}

int main() {
	
	int n;
	scanf("%d", &n);
	check(n); // OK
	
	return 0;
}

