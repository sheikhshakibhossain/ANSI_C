#include <stdio.h>

int binary(int n)
{
	static int count = 0;
	if (n == 0) {
		return count;
	}
	if (n%2 == 1 ) {
		count++;
	}
	binary(n/2);
}

int main() 
{
	int num;
	scanf("%d", &num);
	int chk = binary(num);
	printf("%d  ", chk);
	if (chk%2==0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}
