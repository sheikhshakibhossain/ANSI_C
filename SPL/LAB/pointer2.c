#include <stdio.h>

void swap(int *a, int *b) {

	// printf("value of a=%d, b=%d\n", a,b);
	// printf("addr. of a=%d, b=%d\n", &a,&b);
	printf("\nvalue of a=%d, b=%d\n", a,b);
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	
	int m,n;
	scanf("%d %d", &m, &n);
	//swap(m,n);
	swap(&m, &n);
	printf("\nvalue of m=%d, n=%d\n", m,n);
	printf("addr. of m=%d, n=%d\n", &m,&n);
	
	return 0;
}
