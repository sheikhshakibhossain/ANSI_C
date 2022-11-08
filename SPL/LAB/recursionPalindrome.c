#include <stdio.h>
void palindrome(int a);

int main() {
	
	int n;
	scanf("%d", &n);
	palindrome(n);
	
	return 0;
}

void palindrome(int a) { // 5 4 3 2 1 2 3 4 5

	// if (a==0) // base case
	// {
	// 	printf("%d ", a);
	// 	palindrome(a+1);
	// }

	printf("%d ", a);
	if (a==1)
		return;

	palindrome(a-1);
	printf("%d ", a);

}