#include <stdio.h>

int main() {

	// 15. percentage and divission
	int math, phy, chem, total;
	float percentage;
	scanf("%d %d %d", &math, &phy, &chem);
	total = math + phy + chem;
	percentage = total / 3.0;
	printf("Percentage: %.2f%% \nDivision: ", percentage);
	if (percentage >= 80.0)
		printf("Division: A");
	else if (percentage >= 70.0)
		printf("Division: B");
	else if (percentage >= 60.0)
		printf("Division: C");
	else if (percentage >= 50.0)
		printf("Division: D");
	else if (percentage >= 40.0)
		printf("Division: E");
	else
		printf("Fail");

	return 0;
}

