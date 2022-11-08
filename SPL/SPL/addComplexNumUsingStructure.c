#include <stdio.h>

typedef struct {

	float real;
	float imaginary;

} complex;

complex add(complex x, complex y);

int main() {
	
	complex a, b, sum;
	scanf("%f %f", &a.real, &a.imaginary); // first complex number
	scanf("%f %f", &b.real, &b.imaginary); // second complex num 

	sum = add(a, b);
	printf("Sum = %.2f + %.2f i\n", sum.real, sum.imaginary);

	return 0;
}

complex add(complex x, complex y) {

	complex sum;
	sum.real = x.real + y.real;
	sum.imaginary = x.imaginary + y.imaginary;

	return sum;
}