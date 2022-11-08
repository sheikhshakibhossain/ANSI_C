#include <stdio.h>
#define pi 3.1416
float getArea (int radius);
float getDiameter (float radius);
float getCircumference (float radius);

int main() {
	
	float radius;
	scanf("%f", &radius);

	float area = getArea(radius);
	float diameter = getDiameter(radius);
	float circumference = getCircumference(radius);

	printf("%f\n", diameter);
	printf("%f\n", circumference);
	printf("%f\n", area);
	
	return 0;
}

float getArea (int radius) {
	return (pi * radius * radius);
}

float getDiameter (float radius) {
	return (2*radius);
}

float getCircumference (float radius) {
	return (2 * pi * radius);
}
