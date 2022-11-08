#include <stdio.h>

int main() {

	// 1. check if it's even or odd
	int num;
	scanf("%d", &num);
	if (num%2 == 0)
		printf("even");
	else
		printf("odd");

	
	// 2. check largest among three
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		printf("%f is largest", num1);
	else if (num2 > num1 && num2 > num3)
		printf("%f is largest", num2);
	else 
		printf("%f is largest", num3);


	// 3. check largest among three using conditional op. / ternary op.
	float num1, num2, num3, largest;
	scanf("%f %f %f", &num1, &num2, &num3);
	largest = num1 > num2 ? num1 : (num2 > num3 ? num2 : num3);
	printf("%f is the largest \n", largest);


	// 4. largest among 3 var. using nested if;
	float num1, num2, num3;
	scanf("%f %f %f", &num1, &num2, &num3);
	if (num1 > num2) {
		if (num1 > num3)
			printf("%f is largest", num1);
	}
	else {
		if (num2 > num3)
			printf("%f is largest", num2);
		else if (num2 != num3);
			printf("%f is largest", num3);
	}

	
	// 5. check leap year
	int year;
	scanf("%d", &year);
	if ( (year%4 == 0 && year%100 != 0) || year%400 == 0 )
		printf("leap year");
	else
		printf("not leap year");


	// 6. check alphabet
	char input;
	scanf("%c", &input);
	if ( (input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z') )
		printf("%c is a character ", input);
	else
		printf("%c is not a character ", input);

	
	// 7. positive negative or zero
	float num;
	scanf("%f", &num);
	if (num > 0)
		printf("positive");
	else if (num < 0)
		printf("negative");
	else
		printf("zero");


	// 8. check upper or lower
	char ch;
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
		printf("%c is lower case", ch);
	else if (ch >= 'A' && ch <= 'Z')
		printf("%c is upper case", ch);
	else
		printf("Invalid input");

	
	// 9. vowel consonant
	char ch;
	scanf("%c", &ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("%c is vowel", ch);
	else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		printf("%c is vowel", ch);
	else
		printf("%c is consonant", ch);


	// 10. check alphabet digit special char.
	char ch;
	scanf("%c", &ch);
	if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
		printf("%c is a Alphabet ", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c is a Digit ", ch);
	else
		printf("%c is a Special Character ", ch);


	// 11. day name of week | starts from saturday in bangladesh
	int day;
	scanf("%d", &day);
	switch(day) {
		case 1:
		printf("saturday");
		break;

		case 2:
		printf("sunday");
		break;

		case 3:
		printf("monday");
		break;

		case 4:
		printf("tuesday");
		break;

		case 5:
		printf("wednesday");
		break;

		case 6:
		printf("thursday");
		break;

		case 7:
		printf("friday");
		break;
	}
	

	// 12. check two int. equal or not
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	if (num1 == num2)
		printf("equal");
	else
		printf("not equal");
	

	// 13. check if someone eligible for vote or not
	int age, eligibility = 18;
	scanf("%d", &age);
	if (age >= eligibility)
		printf("eligible");
	else
		printf("Not eligible but will be in %d years", 18-age);


	// 14. check eligibility for admission
	int math,phy,chem,threeTotal,twoTotal;
	scanf("%d %d %d", &math, &phy, &chem);
	threeTotal = math + phy + chem;
	twoTotal = phy + math;
	if ( (math>=65 && phy>=55 && chem>=50 && threeTotal>=180) || twoTotal>=140 ) {
		printf("eligible");
	}
	else {
		printf("not eligible");
	}


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


	// 16. print number of days in the month
	int month;
	scanf("%d", &month);
	switch(month) {
		case 1:
		printf("Jan = 31 days");
		break;

		case 2:
		printf("Feb = 28 days");
		break;

		case 3:
		printf("Mar = 31 days");
		break;

		case 4:
		printf("Apr = 30 days");
		break;

		case 5:
		printf("May = 31 days");
		break;

		case 6:
		printf("Jun = 30 days");
		break;

		case 7:
		printf("Jul = 31 days");
		break;

		case 8:
		printf("Aug = 31 days");
		break;

		case 9:
		printf("Sep = 30 days");
		break;

		case 10:
		printf("Oct = 31 days");
		break;

		case 11:
		printf("Nov = 30 days");
		break;

		case 12:
		printf("Dec = 31 days");
		break;
	}


	// 17. how many money notes
	int ammount, note1, note2, note5, note10, note20, note50, note100, note200, note500, note1000;
	note1 = note2 = note5 = note10 = note20 = note50 = note100 = note200 = note500 = note100 = 0;
	scanf("%d", &ammount);
	if (ammount >= 1000) {
		note1000 = ammount / 1000;
		ammount -= note1000 * 1000;
	}
	if (ammount >= 500) {
		note500 = ammount / 500;
		ammount -= note500 * 500;
	}
	if (ammount >= 200) {
		note200 = ammount / 200;
		ammount -= note200 * 200;
	}
	if (ammount >= 100) {
		note100 = ammount / 100;
		ammount -= note100 * 100;
	}
	if (ammount >= 50) {
		note50 = ammount / 50;
		ammount -= note50 * 50;
	}
	if (ammount >= 20) {
		note20 = ammount / 20;
		ammount -= note20 * 20;
	}
	if (ammount >= 10) {
		note10 = ammount / 10;
		ammount -= note10 * 10;
	}
	if (ammount >= 5) {
		note5 = ammount / 5;
		ammount -= note5 * 5;
	}
	if (ammount >= 2) {
		note2 = ammount / 2;
		ammount -= note2 * 2;
	}
	if (ammount >= 1) {
		note1 = ammount / 1;
		ammount -= note1 * 1;
	}
	printf("1000 tk. note = %d \n", note1000);
	printf("500 tk. note = %d \n", note500);
	printf("200 tk. note = %d \n", note200);
	printf("100 tk. note = %d \n", note100);
	printf("50 tk. note = %d \n", note50);
	printf("20 tk. note = %d \n", note20);
	printf("10 tk. note = %d \n", note10);
	printf("5 tk. note = %d \n", note5);
	printf("2 tk. note = %d \n", note2);
	printf("1 tk. note = %d \n", note1);


	// 18. check if the triangle can be formed or not from value of angles
	int x,y,z,area;
	scanf("%d %d %d", &x, &y, &z);
	if ( x+y+z == 180 && x > 0 && y > 0 && z > 0 ) // no angle can be 0
		printf("valid triangle");
	else
		printf("triangle not valid");


	return 0;
}
