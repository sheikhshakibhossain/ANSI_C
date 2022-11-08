#include <stdio.h>
void recur(int a);
int fac(int a);

int main() {
	
	// R E C U R S I V E   F U N C T I O N
	//recur(5);
	int factorial = fac(5);
	printf("%d\n", factorial);
	
	return 0;
}


void recur(int a) {

	if (a==1) { // base case
		printf("%d ", a);
		return;
	}

	printf("%d ", a); // 5 4 3 2 1
	recur(a-1); // recursive call
	printf("%d ", a); // 1 2 3 4 5
}


int fac(int a) {

	if (a==1) {
		return 1;
	}
	return a*fac(a-1);
}