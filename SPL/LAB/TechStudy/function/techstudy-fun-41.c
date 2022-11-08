#include <stdio.h>
#include <math.h>
int rev(int num);
int isPalindrome(int num);


int main() {
	
	int num;
	scanf("%d", &num);
	if ( isPalindrome(num) == 1 )
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
	
	return 0;
}

int isPalindrome(int num) {
	
	if ( rev(num) == num )
		return 1;
	else
		return 0; 
}

int rev(int num) {

	int digit = log10(num);
	if (num==0)
		return 0;
	
	return ( (num%10) * pow(10, digit) + rev(num/10) );
}