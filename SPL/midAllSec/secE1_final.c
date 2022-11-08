#include <stdio.h>
int isPrime (int num);

int main() {
	
	int n;
	scanf("%d", &n);
	int arr[n], prime[n], k=0;
	
	for (int i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		if ( isPrime(arr[i]) == 1 || arr[i] == 1 ) {
			prime[k] = arr[i];
			k++;
		}
	}

	for (int i=0; i<k; i++)
		printf("%d ", prime[i]);
	
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
