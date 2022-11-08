#include <stdio.h>
int isPrime (int num);

int main() {
	
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	for (int i=r1; i<=r2; i++)
	{
		if ( isPrime(i) == 1 )
			printf("%d ", i);
	}
	
	return 0;
}

int isPrime (int num) {
	int flag = 1;
	for (int i=2; i<=num/2; i++) {
		if (num%i == 0) {
			flag = 0;
			break;
		}
	}
	
	return flag;
}