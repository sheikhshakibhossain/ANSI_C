#include <stdio.h>

int main() {

	int num1,num2,min,max,rem;
	scanf("%d %d", &num1, &num2);
	max = num1 > num2 ? num1 : num2 ;
	min = num1 < num2 ? num1 : num2 ;

	while(max % min != 0) {
		rem = max % min;
		max = min;
		min = rem;		
	}
	int gcd = min;
	printf("gcd = %d \n", gcd);
	int lcm = (num1 * num2) / gcd;
	printf("lcm = %d \n", lcm);

	return 0;
}

