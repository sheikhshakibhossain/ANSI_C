#include <stdio.h>

int main() {
	
	int n,r,nFac=1, rFac=1, n_minus_r_Fac=1;
	scanf("%d %d", &n, &r);

	for (int i=1; i<=n; i++)
		nFac *= i;

	for (int i=1; i<=r; i++)
		rFac *= i;
	
	for (int i=1; i<=n-r; i++)
		n_minus_r_Fac *= i;

	int nCr = nFac / (rFac * n_minus_r_Fac);
	printf("%d\n", nCr);

	return 0;
}

