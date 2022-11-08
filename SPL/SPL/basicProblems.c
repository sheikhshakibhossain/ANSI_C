#include <stdio.h>

int main() {  // problem in number 9

	// 1. hello world
	printf("Hello world! \n");


	// 2. Add two
	int num1, num2, total;
	scanf("%d %d", &num1, &num2);
	total = num1 + num2;
	printf("Total = %d \n", total);


	// 3. swap two values
	int num1,num2,temp;
	scanf("%d %d", &num1, &num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Swapped value: num1 = %d, num2 = %d \n", num1, num2);


	// 4. multiply two float
	float num1, num2, multi;
	scanf("%f %f", &num1, &num2);
	multi = num1 * num2;
	printf("Multiple value = %f \n", multi);


	// 5. All arithmetic op.
	float num1, num2;
	scanf("%f %f", &num1, &num2);
	printf("Addition = %f \n", num1+num2);
	printf("Multiplication = %f \n", num1*num2);
	printf("Division = %f \n", num1/num2);
	printf("Modulus/Remainder = %d \n", (int)num1 % (int)num2);


	// 6. Feet to meter
	float feet, meter;
	scanf("%f", &feet);
	meter = feet / 3.28084;
	printf("%f feet = %f meter \n", feet, meter);


	// 7. celcius to farenheit
	float celcius, farenheit;
	scanf("%f", &celcius);
	farenheit = (celcius * 9 / 5) + 32;
	printf("%f celcius = %f farenheit \n", celcius, farenheit);


	// 8. farenheit to celcius
	float celcius, farenheit;
	scanf("%f", &farenheit);
	celcius = (farenheit - 32) / 9 * 5;
	printf("%f farenheit = %f celcius \n", farenheit, celcius);


	// 9. size of data types
	int a = 1; 
	float b = 1.0; 
	char c = 'a';     // why  %ld ?
	double d = 1.0;
	printf("size of data types: \n");
	printf("int = %ld, float = %ld, double = %ld, char = %ld \n", sizeof(a), sizeof(b), sizeof(d), sizeof(c));



	// 10. prints ASCII value
	char input;
	scanf("%c", &input); // change the format specifier to see the ASCII value
	printf("ASCII value of %c = %d \n", input, input);

	// 11. Area of circle
	float radius, pie = 3.1416, area;
	scanf("%f", &radius);
	area = pie * radius * radius;
	printf("Area of circle = %f \n", area);


	// 12. Area of square
	float area, length;
	scanf("%f", &length);
	area = length * length;
	printf("Area of square = %f \n", area);


	// 13. Area of rectangle
	float area, length, width;
	scanf("%f %f", &length, &width);
	area = length * width;
	printf("Area of square = %f \n", area);


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

