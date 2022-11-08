#include <stdio.h>

int main() {

	// 7. celcius to farenheit
	float celcius, farenheit;
	scanf("%f", &celcius);
	farenheit = (celcius * 9 / 5) + 32;
	printf("%f celcius = %f farenheit \n", celcius, farenheit);

	return 0;
}

