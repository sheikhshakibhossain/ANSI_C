#include <stdio.h>
/*
	UIU CGPA calculator
	Author: Mr. Garbage
*/

int main(void) {

	printf("\n\n\t\t\t============== UIU CGPA CALCULATOR ==============\n\n\n");
	int passedCredit=0;
	double oldCgpa=0;
	printf("\nEnter passed Credit: ");
	scanf("%d", &passedCredit);
	printf("Enter previous CGPA: ");
	scanf("%lf", &oldCgpa);

	int credit=0, totalCredit=0;
	double gpa=0, grade=0, oldCredit=0;
	while(1) {
		printf("\nEnter Credit: ");
		scanf("%d", &credit);
		printf("Enter Grade: ");
		scanf("%lf", &grade);

		gpa = (gpa*oldCredit + credit*grade) / (oldCredit + credit);
		oldCredit = credit;
		totalCredit = totalCredit + credit;

		// checking exit status
		char exitLoop;
		printf("Enter AnyKey to continue or 0 to exit: ");
		scanf(" %c", &exitLoop);
		if(exitLoop == '0') {
			break;
		}
	}

	double cgpa = (oldCgpa*passedCredit + gpa*totalCredit) / (passedCredit + totalCredit);
	printf("\n\n\t\t\t================== Summary ==================\n\n\n");
	printf("\t\t\t\tYour current GPA = %.2lf \n", gpa);
	printf("\t\t\t\tYour current CGPA = %.2lf \n", cgpa);
	printf("\n\t\t\t=============================================\n");

	return 0;

}

