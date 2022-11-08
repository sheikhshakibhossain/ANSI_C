#include <stdio.h>
int cube(int num);

int main() {
	
	int n;
	scanf("%d", &n);
	n = cube(n);
	printf("%d\n", n); // OK
	
	return 0;
}

int cube(int num) {
	int result = 1;
	for (int i=1; i<=3; i++) { // 2^3 == 1x2 , 2x2, 4x2, 8
		result = num * result;
	}
	return result;
}

