#include <stdio.h>
int rev(int num);

int main() {
	
	int num;
	scanf("%d", &num);

	int reverse = rev(num); // OK
	printf("%d\n", reverse);
	
	return 0;
}

int rev(int num) {

	static int reverse = 0;
	if (num == 0)
		return reverse;

	int digit = num % 10;
	reverse = reverse * 10 + digit;
	return rev(num/10);
}
