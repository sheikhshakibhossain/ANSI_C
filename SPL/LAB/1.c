#include <stdio.h>

int main() {

	int r1,r2,i;
	scanf("%d %d", &r1, &r2);
	for (i=r1; i<=r2; i++) {
		int flag = 0, digit;
		int num = i;
		int check = i;
		int temp = num;
		int first = 0, last = 0, sum = 0;
		last = temp % 10;
		while (temp > 10)
			temp = temp /10;

		first = temp;
		while (num != 0) {
			digit = num %10;
			num = num / 10;
			sum = sum + digit;
		}

		if (first == 1 && last == 1 && sum != 11 && (sum * sum) % 8 == 0 );
			printf("%d ", check);	// OK
		
	}

	return 0;
}

