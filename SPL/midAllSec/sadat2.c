#include <stdio.h>
int isPrime (int num);

int main() {
	
	int x, y;
	scanf("%d %d", &x, &y);
	int k=0, arr[y-x]; // 10 20 --> 20-10=10; total elements = 10; so arr[10]

	for (int i=x; i<=y; i++)
	{
		if ( isPrime(i) == 1 ) { // using isPrime custom function; 1 means true here
			arr[k] = i;
			k++;
		}	
	}

	for (int i=0; i<k; i++) { // output
		printf("%d", arr[i]);
		if (i < k-1)
			printf(", ");
	}
	
	return 0;
}


int isPrime (int num) // user defined function
{
	int prime = 1;
	for (int i=2; i<=num/2; i++) 
	{
		if (num % i == 0) {
			prime = 0;
			break;
		}
	}
	return prime; // 1 = true; 0 = false
}

