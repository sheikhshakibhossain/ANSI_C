#include <stdio.h>

int main() {
	
	int a = 5;
	int *ptr = &a;
	int **pptr = &ptr;

	printf("value of a = %d\naddress of a = %d\n", a, &a);
	printf("value of ptr = %d\naddress of ptr = %d\n", ptr, &ptr);
	printf("value of the variable pointed by ptr = %d\n\n", *ptr);

	printf("value of pptr = %d\naddress of pptr = %d\n", pptr, &pptr);
	printf("value of the variable pointed by pptr = %d\n", **pptr);
	
	return 0;
}