#include <stdio.h>
void isEven(int num);

int main() {
	
	int n;
	scanf("%d", &n);
	isEven(n);
	
	return 0;
}

void isEven(int num) {
	if (num%2==0)
		printf("even");
	else 
		printf("odd");
}
