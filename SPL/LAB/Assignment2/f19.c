#include <stdio.h>

int isPrime(int num);
void GeneratePrime(int n);

int main() {
	
	int n;
	scanf("%d", &n);
	GeneratePrime(n); // OK
	
	return 0;
}

void GeneratePrime(int n) {

	int arr[n], k=0;
	for (int i=1; i<=n; i++) {
		if ( isPrime(i)==1 ) {
			arr[k] = i;
			k++;
		}
	}

	printf("Prime less than %d: ", n);
	for (int i=0; i<k; i++) {
		printf("%d", arr[i]);
		if (i < k-1)
				printf(", ");
	}
}

int isPrime(int num) {

	int flag = 1;
	for (int i=2; i<=num/2; i++) {
		if (num%i==0) {
			flag = 0;
			break;
		}
	}
	if (num==1)
		flag = 0;

	return flag;
}
