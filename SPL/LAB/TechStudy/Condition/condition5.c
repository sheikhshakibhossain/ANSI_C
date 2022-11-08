#include <stdio.h>

int main() {

	// 5. check leap year
	int year;
	scanf("%d", &year);
	if ( (year%4 == 0 && year%100 != 0) || year%400 == 0 )
		printf("leap year");
	else
		printf("not leap year");

	return 0;
}

