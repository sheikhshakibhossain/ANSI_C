#include <stdio.h>

int reverse(int num)
{
	static int reverse_of_num = 0;
	if (num == 0) {
		return reverse_of_num;
	}
	int digit = num % 10;
	reverse_of_num = reverse_of_num * 10 + digit;
	reverse(num/10);
}

int isPalindrome(int num)
{
	if ( reverse(num) == num ) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	
	int n;
	scanf("%d", &n);

	if ( isPalindrome(n) ) {
		printf("Palindrome\n");
	}
	else {
		printf("Not Palindrome\n");
	}
	
	return 0;
}
