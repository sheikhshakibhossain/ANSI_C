#include <stdio.h>
int GenNthPrime(int n);

int main() {
	
	int n;
	scanf("%d", &n);
	int prime = GenNthPrime(n);
	printf("%dth Prime: %d\n", n, prime);

	return 0;
}

int GenNthPrime(int n) {
	
	int num = 2, exit = 0, result = 0;
	while (1) {
		
		int flag = 1;
		for (int i=2; i<=num/2; i++) {
			if (num%i==0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) 
			exit++;
	
		if (exit == n) {
			result = num;
			break;
		}

		num++; // updating number
	}
	
	return result;
}