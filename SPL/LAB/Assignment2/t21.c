#include <stdio.h>
int rev(int num);
int isPalindrome(int num);

int main() {
	
	int num;
	scanf("%d", &num);

	if (isPalindrome(num) == 1)
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");
	
	return 0;
}

int isPalindrome(int num) {

	if ( rev(num) == num ) // OK
		return 1;
	else
		return 0;
}

int rev(int num) {

	static int reverse = 0;
	if (num==0)
		return reverse;

	int digit = num%10;
	reverse = reverse * 10 + digit;
	rev(num/10);
}
