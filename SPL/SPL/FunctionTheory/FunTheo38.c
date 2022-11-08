#include <stdio.h>

int isPrime(int num) {

	int flag = 1;
	for (int i=2; i<=num/2; i++) {
		if (num%i==0) {
			flag = 0;
			break;
		}
	}
	return flag;
}

int main() {
	
	int n;
	scanf("%d", &n);
	if (isPrime(n) == 1)
		printf("Prime\n");
	else
		printf("Not prime\n");
	
	return 0;
}

