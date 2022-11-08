#include <stdio.h>
#include <string.h>
#include "shakib.h"

int main() {

	// check if a number is palindrome
	int num;
	scanf("%d", &num);
	int len = 0, temp = num, check = num, finalCheck = num;
	while (temp != 0){
		temp /= 10;
		len++;
	}

	int digit, rev[len], lastIndex = len - 1;
	for (int i=0; i<=lastIndex; i++) {
		digit = num % 10;
		num /= 10;
		rev[len-1] = digit; // array of given number
		len--;
	}

	// checking if palindrome
	digit = 0; // reset
	int i = 0, palindrome = 1;
	while (check != 0) { // check = num, so, last digit will come first | rev[i], first will come first
		digit = check % 10;
		check /= 10;

		if (digit != rev[i]) {
			palindrome = 0;
			break;
		}
		i++;
	}
	if (palindrome == 0)
		printf("%d is not palindrome", finalCheck);
	else
		printf("%d is palindrome", finalCheck);



	// a word too can be palindrome
	char str[1000];
	gets(str);
	int i = 0, len = 0;
	while (str[i] != '\0') {
		i++;
		len++;
	}
	
	int revIndex = 0, lastIndex = len - 1;
	char rev[len];
	for (i=lastIndex; i>=0; i--) { // reverse the string
		rev[revIndex] = str[i]; // rev index 1st = str index last
		revIndex++;
	}
	puts(rev);


	int i, n, sum = 0;
	scanf("%d", &n);
	int numbers[n];
	for(i=0; i<n; i++) {
		scanf("%d", &numbers[i]);
		if (numbers[i] % 2 == 0) sum += numbers[i];
	}
	printf("sum = %d \n", sum);



	return 0;
}

