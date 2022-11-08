#include <stdio.h>

int main() {

	// 14. days to YY MM WW DD
	int input,year,month,week,days;
	scanf("%d", &input);
	year = input / 365;
	days = input % 365;
	month = days / 30;
	days = days % 30;
	week = days / 7;
	days = days % 7;
	printf("Year: %d, Month: %d, Week: %d, Days: %d \n", year,month,week,days);

	return 0;
}

