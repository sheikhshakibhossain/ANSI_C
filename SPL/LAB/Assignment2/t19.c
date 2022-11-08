#include <stdio.h>
int fibonacci(int n);

int main() {
	
	int n;
	scanf("%d", &n);

	int result = fibonacci(n); // generates n'th fibonacci term 
	printf("%d\n", result); // OK

	return 0;
}

int fibonacci(int n) {

	if (n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return (fibonacci(n-2) + fibonacci(n-1));
}
