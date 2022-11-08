#include <stdio.h>

int reverse(int num, int rem)  // NOT OK
{
	if (num == 0){
		return rem;
	}
	return (rem * 10) + reverse( (num/10), (num%10));
}

int reverse1(int num)
{
	static int reverse_of_num = 0;
	if (num == 0) {
		return reverse_of_num;
	}
	int digit = num % 10;
	reverse_of_num = reverse_of_num * 10 + digit;
	reverse1(num/10);
}

int main() {
	
	int num;
	scanf("%d", &num);

	//int rev = reverse(num, 0);
	int rev = reverse1(num);
	printf("%d", rev);
	
	return 0;
}
