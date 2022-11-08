#include <stdio.h>

int main() {

	/*// 1. take 5 input from user and print it's avg.
	int i, n, num;
	float sum = 0;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		scanf("%d", &num);
		sum += num;
	}
	printf("avg = %.2f", sum / n); */



	/*// 2. factorial from a range 3 to 6   SO: 3! = 3 x 2 x 1 = 6
	int num, r1, r2;
	scanf("%d %d", &r1, &r2);
	for (r1; r1<=r2; r1++) {

		num = r1;
		int fac = 1;
		printf("%d! = ", num);
		for (num; num>=1; num--) {
			fac *= num;
			if (num != 1)
				printf("%d x ", num);
			else
				printf("%d ", num);
	}
	printf("= %d\n",fac); */



	/*// 3. factorial from a range 3 to 6   SO: 4! = 4 x 3 x 2 x 1 = 6   for ever numbers
	int num, r1, r2;
	scanf("%d %d", &r1, &r2);
	for (r1; r1<=r2; r1++) {
		
		if (r1 % 2 != 0) 
			continue; // when num is odd skip the under statements and start the loop again

		num = r1;
		int fac = 1;
		printf("%d! = ", num);
		for (num; num>=1; num--) {
			fac *= num;
			if (num != 1)
				printf("%d x ", num);
			else
				printf("%d ", num);
		}
		printf("= %d\n",fac);
	} */



	// Home Work | SI: 456,  SO: No. 1 digit = 4, No. 2 digit = 5, No. 3 digit = 6
	int num;
	scanf("%d", &num);
	int len = 0, temp = num;
	while (temp != 0) {
		temp /= 10;
		len++; // getting the length of the given number
	}

	int digit, rev[len], lastIndex = len - 1;
	while (num != 0) {
		digit = num % 10;
		num /= 10;
		rev[len-1] = digit; // putting the last digit in the last index of the array and so on
		len--;
	}

	int counter = 1;
	for (int i = 0; i <= lastIndex; i++) {
		printf("No. %d digit = %d \n", counter, rev[i]); // printing the digit and it's position
		counter++;
	}



	


	return 0;
}

