#include <stdio.h>

typedef struct {

	float real;
	float imag;

} complex;

// Add proto below
complex add(complex n1, complex n2);

int main() {
	
	complex x, y, sum;
	printf("Enter first complex number: ");
	scanf("%f %f", &x.real, &x.imag); // first complex number

	printf("Enter second complex number: ");
	scanf("%f %f", &y.real, &y.imag); // second complex num 

	sum = add(x, y);
	printf("Sum = %.2f + %.2f i\n", sum.real, sum.imag);

	return 0;
}

complex add(complex n1, complex n2) {

	complex temp;
	temp.real = n1.real + n2.real;
	temp.imag = n1.imag + n2.imag;

	return temp;
}