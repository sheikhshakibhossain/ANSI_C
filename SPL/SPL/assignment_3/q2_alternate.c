#include <stdio.h>

int binary(int n) // will return sum of remainder | in binary 0 or 1, it will be sum of all 1
{
	if (n == 0) {
		return (n%2);
	}
	return (n%2)+ binary(n/2);
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