#include <stdio.h>

int num_0f_digits(int num);
int main() {
	
	int num;
	scanf("%d", &num);
	
	int x = num_0f_digits(num);
	printf("%d\n", x);
	
	return 0;
}

int num_0f_digits(int num) 
{
	static int count = 0;
	if (num == 0)
		return count;

	num_0f_digits(num/10);
	count++;
}