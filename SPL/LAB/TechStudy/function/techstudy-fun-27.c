#include <stdio.h>
#include <math.h>
int rev(int num, int reverse);

int main() {
	
	int num;
	scanf("%d", &num);

	int reverse = rev(num,0);
	printf("%d\n", reverse);
	
	return 0;
}

int rev(int num, int reverse) {

	// int digit = log10(num); // why log10
	// if (num == 0)
	// 	return 0;
	int rem = num%10;
	// return ( (num%10) * pow(10, digit) )+ rev(num/10);
	if (num/10==0){
		reverse = reverse * 10 + rem;
		return reverse;
	}	
	reverse = reverse * 10 + rem;
	return rev(num/10, reverse);
}