#include <stdio.h>

int main() {

	// 13. check if someone eligible for vote or not
	int age, eligibility = 18;
	scanf("%d", &age);
	if (age >= eligibility)
		printf("eligible");
	else
		printf("Not eligible but will be in %d years", 18-age);

	return 0;
}

