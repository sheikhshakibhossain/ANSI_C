#include <stdio.h>
/* 	Starts and ends with 1
	is not a palindrome number
	Square of the sum of the digits are divisible by 8 */

int main() {
	
	int r1, r2;
	scanf("%d %d", &r1, &r2);

	for (int i=r1; i<=r2; i++) {

		int num = i, sum = 0;
		int first=0, last=0, digit=0;
		int arr[32], k=0;

		while (num != 0) 
		{
			if (num == i) first = num % 10;
			digit = num % 10;
			arr[k] = digit;
			k++;
			sum += digit;
			num /= 10;
		}
		last = digit;

		// reverse of arr
		int rev[32], x = k-1;
		for (int j=0; j<k; j++) 
		{
			rev[x] = arr[j];
			x--;
		}
		// palindrome check
		int notPalindrome = 0;
		for (int j=0; j<k; j++) 
		{
			if (arr[j] != rev[j])
				notPalindrome = 1;
		}

		if (first == 1 && last == 1 && (sum*sum) % 8 == 0 && notPalindrome == 1)
			printf("%d ", i);
	}
	
	return 0;
}

