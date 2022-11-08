#include <stdio.h>

int main() {

	// 8. farenheit to celcius
	float celcius, farenheit;
	scanf("%f", &farenheit);
	celcius = (farenheit - 32) / 9 * 5;
	printf("%f farenheit = %f celcius \n", farenheit, celcius); 

	return 0;
}

