#include <stdio.h>

int main() {
	
	int n1, n2, m1, m2;
	scanf("%d %d", &n1, &n2);
	m1 = n1;
	m2 = n2;

	while (n1 != n2) // GCD
	{
		if (n1 > n2)
			n1 = n1 - n2;
		else
			n2 = n2 - n1;
	}
	int gcd = n1; // n1 or n2 cuz both're same now
	int lcm = (m1*m2) / gcd;

	printf("GCD: %d\n", gcd);
	printf("LCM: %d\n", lcm); 
	
	return 0;
}

