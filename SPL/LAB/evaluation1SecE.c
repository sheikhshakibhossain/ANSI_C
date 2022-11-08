#include <stdio.h>
/* there are two problem sets */

int main() {
	
	// 2. Input:5 ----> 5^2 + 4.3^2 + 2.1^2 = sum    ||    Input:8 ----> 8.7^2 + 6.5^2 + 4.3^2 + 2.1^2 = sum
	int n;
	float sum = 0;
	scanf("%d", &n);
	if (n%2 != 0) { // odd
		sum = n * n;
		printf("%d^2 + ", n);
		n--;
	}

	float point = 0.3; // point = n.(n-1); but how?
	for (int i=n; i>=2; i -= 2) {

		float num = 0;
		num = (i+1) - point;
		point += 0.2;

		sum += num * num;
		printf("%.1f^2", num);
		if (i != 2) 
			printf(" + ");
	}
	printf(" = %.2f\n", sum);
	
	return 0;
}

