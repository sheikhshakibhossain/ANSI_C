#include <stdio.h>
int isPerfect (int num);

int main() {
	
	int r1, r2;
	scanf("%d %d", &r1, &r2);
	for (int i=r1; i<=r2; i++)
		if ( isPerfect(i) == 1 )
			printf("%d ", i);
	
	return 0;
}

int isPerfect (int num) {
	int sum = 0, flag = 0;
	for (int i=1; i<num; i++)  // i < num ,,, cuz num er proper divisor num nije hote parbe na
		if ( num%i == 0 )
			sum += i;

	if (sum == num)
		flag = 1;

	return flag;
}